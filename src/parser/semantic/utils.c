#include "semantic.h"
#include <string.h>

ExecuteType get_instruction_type(const char *type_str)
{

    if (strcmp(type_str, "DECLARATION") == 0)
    {

        return DECLARATION;
    }
    if (strcmp(type_str, "ASSIGNMENT") == 0)
        return ASSIGNMENT;
    return UNKNOWN;
}

OperativeType get_operativeType(const char *type_str)
{
    if (strcmp(type_str, "CHARACTER") == 0)
        return TYPE_CHARACTER;
    if (strcmp(type_str, "INTEGER") == 0)
        return TYPE_INTEGER;
    if (strcmp(type_str, "FLOAT") == 0)
        return TYPE_FLOAT;
    if (strcmp(type_str, "DOUBLE") == 0)
        return TYPE_DOUBLE;
    if (strcmp(type_str, "STRING") == 0)
        return TYPE_STRING;
    return -1;
}

ExpressionType
get_expression_type(const char *type_str)
{
    if (strcmp(type_str, "ID") == 0)
        return EXP_ID;
    if (strcmp(type_str, "INTEGER") == 0)
        return EXP_INTEGER;
    if (strcmp(type_str, "FLOAT") == 0)
        return EXP_FLOAT;
    if (strcmp(type_str, "STRING") == 0)
        return EXP_STRING;
    if (strcmp(type_str, "BOOLEAN") == 0)
        return EXP_BOOLEAN;
    if (strcmp(type_str, "CHARACTER") == 0)
        return EXP_CHARACTER;
    if (strcmp(type_str, "DOUBLE") == 0)
        return EXP_DOUBLE;
    if (strcmp(type_str, "SUM") == 0)
        return EXP_SUM;
    if (strcmp(type_str, "SUBTRACT") == 0)
        return EXP_SUBTRACT;
    if (strcmp(type_str, "MULTIPLICATION") == 0)
        return EXP_MULTIPLICATION;
    if (strcmp(type_str, "DIVIDE") == 0)
        return EXP_DIVIDE;
    if (strcmp(type_str, "CASTING") == 0)
        return EXP_CASTING;

    return UNKNOWN;
}

ConvertedValue convert_operand(symbol *operand)
{
    ConvertedValue cv = {0};

    if (strcmp(operand->type, "STRING") == 0)
    {
        cv.str_value = operand->value;
        cv.result_type = TYPE_STRING;
    }
    else if (strcmp(operand->type, "INTEGER") == 0)
    {
        cv.num_value = atoi(operand->value);
        cv.result_type = TYPE_INTEGER;
    }
    else if (strcmp(operand->type, "FLOAT") == 0)
    {
        cv.num_value = atof(operand->value);
        cv.result_type = TYPE_FLOAT;
    }
    else if (strcmp(operand->type, "DOUBLE") == 0)
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
        result->type = strdup("STRING");
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
            result->type = strdup("ERROR");
            result->value = strdup("Division by zero");
            return result;
        }
        final_result = cv_left.num_value / cv_right.num_value;
        break;
    default:
        result->type = strdup("ERROR");
        result->value = strdup("Unknown operation");
        return result;
    }

    // Formatear resultado según el tipo
    result->value = (char *)calloc(50, sizeof(char)); // Suficiente espacio

    switch (result_type)
    {
    case TYPE_INTEGER:
        result->type = strdup("INTEGER");
        sprintf(result->value, "%d", (int)final_result);
        break;
    case TYPE_FLOAT:
        result->type = strdup("FLOAT");
        sprintf(result->value, "%.2f", final_result);
        break;
    case TYPE_DOUBLE:
        result->type = strdup("DOUBLE");
        sprintf(result->value, "%.6f", final_result);
        break;
    default:
        result->type = strdup("INTEGER");
        sprintf(result->value, "%d", (int)final_result);
        break;
    }

    return result;
}

bool is_valid_cast(OperativeType from, OperativeType to)
{
    // char puede castear a int, float, double
    if (from == TYPE_CHARACTER && (to == TYPE_INTEGER || to == TYPE_FLOAT || to == TYPE_DOUBLE))
    {
        return true;
    }
    // int puede castear a float, double
    if (from == TYPE_INTEGER && (to == TYPE_FLOAT || to == TYPE_DOUBLE))
    {
        return true;
    }
    // float puede castear a double
    if (from == TYPE_FLOAT && to == TYPE_DOUBLE)
    {
        return true;
    }
    // Tipos iguales son válidos
    if (from == to)
    {
        return true;
    }
    return false;
}

// Función para aplicar casting automático
symbol *apply_casting_auto(symbol *value, const char *target_type)
{
    OperativeType from_type = get_operativeType(value->type);
    OperativeType to_type = get_operativeType(target_type);

    if (!is_valid_cast(from_type, to_type))
        return value;

    if (from_type == to_type)
        return value; // No necesita casting

    symbol *casted = (symbol *)calloc(1, sizeof(symbol));
    casted->type = strdup(target_type);
    casted->environment = value->environment ? strdup(value->environment) : NULL;
    casted->line = value->line;
    casted->column = value->column;

    // Realizar la conversión del valor
    char buffer[64];
    switch (to_type)
    {
    case TYPE_INTEGER:
        if (from_type == TYPE_CHARACTER)
        {
            sprintf(buffer, "%d", (int)value->value[0]); // char a int
        }
        break;

    case TYPE_FLOAT:
        if (from_type == TYPE_CHARACTER)
        {
            sprintf(buffer, "%.2f", (float)value->value[0]); // char a float
        }
        else if (from_type == TYPE_INTEGER)
        {
            sprintf(buffer, "%.2f", (float)atoi(value->value)); // int a float
        }
        break;

    case TYPE_DOUBLE:
        if (from_type == TYPE_CHARACTER)
        {
            sprintf(buffer, "%.6f", (double)value->value[0]); // char a double
        }
        else if (from_type == TYPE_INTEGER)
        {
            sprintf(buffer, "%.6f", (double)atoi(value->value)); // int a double
        }
        else if (from_type == TYPE_FLOAT)
        {
            sprintf(buffer, "%.6f", (double)atof(value->value)); // float a double
        }
        break;

    default:
        strcpy(buffer, value->value);
        break;
    }

    casted->value = strdup(buffer);
    return casted;
}

// Función para verificar si el casting hacia abajo es válido
bool is_valid_downcast(OperativeType from, OperativeType to)
{
    // double puede castear a float, int, char
    if (from == TYPE_DOUBLE && (to == TYPE_FLOAT || to == TYPE_INTEGER || to == TYPE_CHARACTER))
    {
        return true;
    }
    // float puede castear a int, char
    if (from == TYPE_FLOAT && (to == TYPE_INTEGER || to == TYPE_CHARACTER))
    {
        return true;
    }
    // int puede castear a char
    if (from == TYPE_INTEGER && to == TYPE_CHARACTER)
    {
        return true;
    }
    // Tipos iguales son válidos
    if (from == to)
    {
        return true;
    }
    return false;
}

// Función para aplicar casting hacia abajo (explícito)
symbol *apply_casting_manual(symbol *value, const char *target_type)
{
    OperativeType from_type = get_operativeType(value->type);
    OperativeType to_type = get_operativeType(target_type);

    if (!is_valid_downcast(from_type, to_type))
    {
        return value;
    }

    if (from_type == to_type)
    {
        return value; // No necesita casting
    }

    symbol *casted = (symbol *)calloc(1, sizeof(symbol));
    casted->type = strdup(target_type);
    casted->environment = value->environment ? strdup(value->environment) : NULL;
    casted->line = value->line;
    casted->column = value->column;

    // Realizar la conversión del valor (con pérdida de precisión)
    char buffer[64];
    switch (to_type)
    {
    case TYPE_CHARACTER:
        if (from_type == TYPE_DOUBLE)
        {
            // double a char (toma la parte entera y convierte a ASCII)
            sprintf(buffer, "%c", (char)((int)atof(value->value)));
        }
        else if (from_type == TYPE_FLOAT)
        {
            // float a char
            sprintf(buffer, "%c", (char)((int)atof(value->value)));
        }
        else if (from_type == TYPE_INTEGER)
        {
            // int a char
            sprintf(buffer, "%c", (char)atoi(value->value));
        }
        break;

    case TYPE_INTEGER:
        if (from_type == TYPE_DOUBLE)
        {
            // double a int (trunca la parte decimal)
            sprintf(buffer, "%d", (int)atof(value->value));
        }
        else if (from_type == TYPE_FLOAT)
        {
            // float a int (trunca la parte decimal)
            sprintf(buffer, "%d", (int)atof(value->value));
        }
        break;

    case TYPE_FLOAT:
        if (from_type == TYPE_DOUBLE)
        {
            // double a float (puede perder precisión)
            sprintf(buffer, "%.2f", (float)atof(value->value));
        }
        break;

    default:
        strcpy(buffer, value->value);
        break;
    }

    casted->value = strdup(buffer);
    return casted;
}
