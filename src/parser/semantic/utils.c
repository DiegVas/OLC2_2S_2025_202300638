#include "semantic.h"

ConvertedValue convert_operand(symbol *operand)
{
    ConvertedValue cv = {0};

    if (strcmp(operand->dataType, "STRING") == 0)
    {
        cv.str_value = operand->value;
        cv.result_type = TYPE_STRING;
    }
    else if (strcmp(operand->dataType, "INTEGER") == 0)
    {
        cv.num_value = atoi(operand->value);
        cv.result_type = TYPE_INTEGER;
    }
    else if (strcmp(operand->dataType, "FLOAT") == 0)
    {
        cv.num_value = atof(operand->value);
        cv.result_type = TYPE_FLOAT;
    }
    else if (strcmp(operand->dataType, "DOUBLE") == 0)
    {
        cv.num_value = atof(operand->value);
        cv.result_type = TYPE_DOUBLE;
    }

    return cv;
}

// Función genérica para operaciones aritméticas
symbol *perform_arithmetic_operation(Expression *exp_left, Expression *exp_right, Context *context, char operation)
{

    symbol *left = evaluate_expression(exp_left, context);
    symbol *right = evaluate_expression(exp_right, context);

    ConvertedValue cv_left = convert_operand(left);
    ConvertedValue cv_right = convert_operand(right);

    symbol *result = (symbol *)calloc(1, sizeof(symbol));

    // Si alguno es string, concatenar (solo para suma)
    if (operation == '+' && (cv_left.result_type == TYPE_STRING || cv_right.result_type == TYPE_STRING))
    {
        result->dataType = strdup("STRING");
        char *left_str = (cv_left.result_type == TYPE_STRING) ? cv_left.str_value : left->value;
        char *right_str = (cv_right.result_type == TYPE_STRING) ? cv_right.str_value : right->value;

        result->value = (char *)calloc(strlen(left_str) + strlen(right_str) + 1, sizeof(char));
        strcpy(result->value, left_str);
        strcat(result->value, right_str);
        return result;
    }

    // Determinar el tipo de resultado (el más "grande")
    OperativeType result_type = (cv_left.result_type > cv_right.result_type) ? cv_left.result_type : cv_right.result_type;

    // Realizar la operación
    double final_result;
    switch (operation)
    {
    case '+':
        final_result = cv_left.num_value + cv_right.num_value;
        break;
    case '-':
        final_result = cv_left.num_value - cv_right.num_value;
        break;
    case '*':
        final_result = cv_left.num_value * cv_right.num_value;
        break;
    case '/':
        if (cv_right.num_value == 0)
        {
            // Manejar división por cero
            result->dataType = strdup("UNDEFINED");
            result->value = strdup("Division by zero");
            return result;
        }
        final_result = cv_left.num_value / cv_right.num_value;
        break;
    case '%':
        if (cv_right.num_value == 0)
        {
            // Manejar módulo por cero
            result->dataType = strdup("UNDEFINED");
            result->value = strdup("Modulo by zero");
            return result;
        }
        final_result = (int)cv_left.num_value % (int)cv_right.num_value;
        break;
    default:
        result->dataType = strdup("UNDEFINED");
        result->value = strdup("Unknown operation");
        return result;
    }

    // Formatear resultado según el tipo
    result->value = (char *)calloc(50, sizeof(char)); // Suficiente espacio

    switch (result_type)
    {
    case TYPE_INTEGER:
        result->dataType = strdup("INTEGER");
        sprintf(result->value, "%d", (int)final_result);
        break;
    case TYPE_FLOAT:
        result->dataType = strdup("FLOAT");
        sprintf(result->value, "%.2f", final_result);
        break;
    case TYPE_DOUBLE:
        result->dataType = strdup("DOUBLE");
        sprintf(result->value, "%.6f", final_result);
        break;
    default:
        result->dataType = strdup("INTEGER");
        sprintf(result->value, "%d", (int)final_result);
        break;
    }

    return result;
}

symbol *perfom_BITWISE(Expression *exp_left, Expression *exp_right, Context *context, char *operation)
{
    symbol *left = evaluate_expression(exp_left, context);
    symbol *right = evaluate_expression(exp_right, context);

    ConvertedValue cv_left = convert_operand(left);
    ConvertedValue cv_right = convert_operand(right);

    if (cv_left.result_type != TYPE_INTEGER || cv_right.result_type != TYPE_INTEGER)
    {
        symbol *result = (symbol *)calloc(1, sizeof(symbol));
        result->dataType = strdup("UNDEFINED");
        result->value = strdup("Bitwise operations do not support non-integer");
        return result;
    }

    symbol *result = (symbol *)calloc(1, sizeof(symbol));

    int left_val = (int)cv_left.num_value;
    int right_val = (int)cv_right.num_value;
    int final_result;

    if (strcmp(operation, "&") == 0)
        final_result = left_val & right_val;
    else if (strcmp(operation, "|") == 0)
        final_result = left_val | right_val;
    else if (strcmp(operation, "^") == 0)
        final_result = left_val ^ right_val;
    else if (strcmp(operation, ">>") == 0)
        final_result = left_val >> right_val;
    else if (strcmp(operation, "<<") == 0)
        final_result = left_val << right_val;
    else
    {
        result->dataType = strdup("UNDEFINED");
        result->value = strdup("Unknown bitwise operation");
        return result;
    }
    result->dataType = strdup("INTEGER");
    result->value = (char *)calloc(50, sizeof(char));
    sprintf(result->value, "%d", final_result);

    return result;
}

char *process_escape_sequences(const char *input)
{
    if (!input)
        return NULL;

    int len = strlen(input);
    char *result = (char *)malloc(len + 1); // En el peor caso, mismo tamaño
    int i = 0, j = 0;

    while (i < len)
    {
        if (input[i] == '\\' && i + 1 < len)
        {
            switch (input[i + 1])
            {
            case 'n':
                result[j++] = '\n';
                i += 2;
                break;
            case 't':
                result[j++] = '\t';
                i += 2;
                break;
            case 'r':
                result[j++] = '\r';
                i += 2;
                break;
            case '\\':
                result[j++] = '\\';
                i += 2;
                break;
            case '"':
                result[j++] = '"';
                i += 2;
                break;
            default:
                // Si no es una secuencia reconocida, mantener como está
                result[j++] = input[i++];
                break;
            }
        }
        else
        {
            result[j++] = input[i++];
        }
    }

    result[j] = '\0';
    return result;
}

symbol *get_legth_of_vector(VectorList *vector)
{
    symbol *result = calloc(1, sizeof(symbol));
    result->dataType = "INTEGER";
    int count = 0;
    VectorNode *current = vector->head;
    while (current)
    {
        count++;
        current = current->next;
    }
    result->value = (char *)calloc(20, sizeof(char));
    sprintf(result->value, "%d", count);
    return result;
}