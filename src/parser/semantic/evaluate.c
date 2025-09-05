#include "semantic.h"
#include "../structures/parser.h"
#include <string.h>

symbol *evaluate_expression(Expression *expr, Context *context)
{
    ExpressionType type = get_expression_type(expr->type);

    symbol *result = (symbol *)calloc(1, sizeof(symbol));

    Expression *exprIZQ = expr->left;
    Expression *exprDER = expr->right;

    switch (type)
    {
    case EXP_INTEGER:
        result->value = strcmp(expr->value, "UNDEFINED") == 0 ? strdup("0") : strdup(expr->value);
        result->dataType = "INTEGER";
        break;
    case EXP_FLOAT:
        result->value = strcmp(expr->value, "UNDEFINED") == 0 ? strdup("0.0") : strdup(expr->value);
        result->dataType = "FLOAT";
        break;
    case EXP_STRING:
        result->value = strcmp(expr->value, "UNDEFINED") == 0 ? strdup("NULL") : strdup(expr->value);
        result->dataType = "STRING";
        break;
    case EXP_BOOLEAN:
        result->value = strcmp(expr->value, "UNDEFINED") == 0 ? strdup("false") : strdup(expr->value);
        result->dataType = "BOOLEAN";
        break;
    case EXP_CHARACTER:
        result->value = strcmp(expr->value, "UNDEFINED") == 0 ? strdup("'\0'") : strdup(expr->value);
        result->dataType = "CHARACTER";
        break;
    case EXP_DOUBLE:
        result->value = strcmp(expr->value, "UNDEFINED") == 0 ? strdup("0.0") : strdup(expr->value);
        result->dataType = "DOUBLE";
        break;
    case EXP_SUM:
        return perform_arithmetic_operation(exprIZQ, exprDER, context, '+');
    case EXP_SUBTRACT:
        return perform_arithmetic_operation(exprIZQ, exprDER, context, '-');
    case EXP_MULTIPLICATION:
        return perform_arithmetic_operation(exprIZQ, exprDER, context, '*');
    case EXP_DIVIDE:
        return perform_arithmetic_operation(exprIZQ, exprDER, context, '/');
    case EXP_MODULO:
        return perform_arithmetic_operation(exprIZQ, exprDER, context, '%');
    case EXP_NEGATIVE:
    {
        symbol *right = evaluate_expression(expr->left, context);
        ConvertedValue cv_right = convert_operand(right);

        if (cv_right.result_type != TYPE_INTEGER && cv_right.result_type != TYPE_FLOAT && cv_right.result_type != TYPE_DOUBLE)
        {
            result->dataType = strdup("UNDEFINED");
            result->value = strdup("Negative operation does not support non-numeric types");
            fprintf(stderr, "Negative operation does not support non-numeric types\n");
            fprintf(stderr, "Right type: %s\n", right->dataType);
            return result;
        }

        result->dataType = right->dataType;
        if (cv_right.result_type == TYPE_INTEGER)
        {
            int neg_value = -((int)cv_right.num_value);
            result->value = (char *)calloc(20, sizeof(char));
            sprintf(result->value, "%d", neg_value);
        }
        else
        {
            double neg_value = -cv_right.num_value;
            result->value = (char *)calloc(30, sizeof(char));
            sprintf(result->value, "%.6f", neg_value);
        }
        return result;
    }
    case EXP_CASTING:
        return apply_casting_manual(evaluate_expression(exprIZQ, context), expr->value);
    case EXP_BITWISE_AND:
        return perfom_BITWISE(exprIZQ, exprDER, context, "&");
    case EXP_BITWISE_OR:
        return perfom_BITWISE(exprIZQ, exprDER, context, "|");
    case EXP_BITWISE_XOR:
        return perfom_BITWISE(exprIZQ, exprDER, context, "^");
    case EXP_BITWISE_LEFT_SHIFT:
        return perfom_BITWISE(exprIZQ, exprDER, context, "<<");
    case EXP_BITWISE_RIGHT_SHIFT:
        return perfom_BITWISE(exprIZQ, exprDER, context, ">>");
    case EXP_EQUALS_OP:
        return perform_comparative_operation(exprIZQ, exprDER, context, ".equals");
    case EXP_EQUALS:
        return perform_comparative_operation(exprIZQ, exprDER, context, "==");
    case EXP_NOT_EQUALS:
        return perform_comparative_operation(exprIZQ, exprDER, context, "!=");
    case EXP_LOGICAL_AND:
        return perform_comparative_operation(exprIZQ, exprDER, context, "&&");
    case EXP_LOGICAL_OR:
        return perform_comparative_operation(exprIZQ, exprDER, context, "||");
    case EXP_LOGICAL_NOT:
    {
        symbol *left = evaluate_expression(expr->left, context);

        if (left->dataType != "BOOLEAN")
        {
            result->dataType = strdup("UNDEFINED");
            result->value = strdup("Logical NOT operation requires a BOOLEAN type");
            fprintf(stderr, "Logical NOT operation requires a BOOLEAN type\n");
            fprintf(stderr, "left type: %s\n", left->dataType);
            return result;
        }

        bool cv_left = boolean_value(left->value);
        result->dataType = "BOOLEAN";
        result->value = (cv_left == true) ? strdup("false") : strdup("true");
        return result;
    }
    case EXP_LESS:
        return perform_comparative_operation(exprIZQ, exprDER, context, "<");
    case EXP_GREATER:
        return perform_comparative_operation(exprIZQ, exprDER, context, ">");
    case EXP_LESS_EQUALS:
        return perform_comparative_operation(exprIZQ, exprDER, context, "<=");
    case EXP_GREATER_EQUALS:
        return perform_comparative_operation(exprIZQ, exprDER, context, ">=");

    case EXP_ID:
    {
        if (SearchID(context->symbols_context, expr->value))
        {
            symbol *sym = SearchSymbol(context->symbols_context, expr->value);
            fprintf(stderr, "DEBUG: Found symbol %s of type %s with value %s\n", sym->id, sym->dataType, sym->value);
            Expression *sym_expr = (Expression *)calloc(1, sizeof(Expression));
            sym_expr->type = sym->dataType;
            sym_expr->value = sym->value;
            sym_expr->line = *(sym->line);
            sym_expr->column = *(sym->column);
            return evaluate_expression(sym_expr, context);
        }

        result->dataType = "UNDEFINED";
        result->value = "Variable no definida";
        result->environment = context->nombre;
        return result;
    }
    default:
        return NULL;
    }
}