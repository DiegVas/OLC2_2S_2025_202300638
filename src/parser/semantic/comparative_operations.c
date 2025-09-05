#include "semantic.h"
#include "../structures/parser.h"
#include <string.h>

symbol *perform_comparative_operation(Expression *exprIZQ, Expression *exprDER, Context *context, char *operator)
{
    symbol *result = (symbol *)calloc(1, sizeof(symbol));

    symbol *left = evaluate_expression(exprIZQ, context);

    symbol *right = evaluate_expression(exprDER, context);

    ConvertedValue cv_left = convert_operand(left);
    ConvertedValue cv_right = convert_operand(right);

    fprintf(stderr, "Comparative operation: %s %s %s\n", left->dataType, operator, right->dataType);
    if (strcmp(left->dataType, right->dataType) != 0)
    {
        result->dataType = strdup("UNDEFINED");
        result->value = strdup("Comparative operation requires both operands to be of the same type");
        fprintf(stderr, "Comparative operation requires both operands to be of the same type\n");
        fprintf(stderr, "Left type: %s, Right type: %s\n", left->dataType, right->dataType);
        return result;
    }

    if (strcmp(left->dataType, "BOOLEAN") == 0)
    {
        bool left_bool = boolean_value(left->value);
        bool right_bool = boolean_value(right->value);

        if (strcmp(operator, "==") == 0)
            result->value = left_bool == right_bool ? strdup("true") : strdup("false");
        else if (strcmp(operator, "!=") == 0)
            result->value = left_bool != right_bool ? strdup("true") : strdup("false");
        else if (strcmp(operator, "&&") == 0)
            result->value = left_bool && right_bool ? strdup("true") : strdup("false");
        else if (strcmp(operator, "||") == 0)
            result->value = left_bool || right_bool ? strdup("true") : strdup("false");
        else
        {
            result->dataType = strdup("UNDEFINED");
            result->value = strdup("Only '==' and '!=' operators are supported for BOOLEAN type");
            fprintf(stderr, "Only '==' and '!=' operators are supported for BOOLEAN type\n");
            return result;
        }
    }
    else if (cv_left.result_type == TYPE_STRING)
    {
        if (strcmp(operator, "==") == 0 | strcmp(operator, ".equals") == 0)
        {
            result->dataType = strdup("BOOLEAN");
            result->value = (strcmp(cv_left.str_value, cv_right.str_value) == 0) ? strdup("true") : strdup("false");
        }
        else if (strcmp(operator, "!=") == 0)
        {
            result->dataType = strdup("BOOLEAN");
            result->value = (strcmp(cv_left.str_value, cv_right.str_value) != 0) ? strdup("true") : strdup("false");
        }
        else
        {
            result->dataType = strdup("UNDEFINED");
            result->value = strdup("Only '==' and '!=' operators are supported for STRING type");
            fprintf(stderr, "Only '==' and '!=' operators are supported for STRING type\n");
            return result;
        }
    }
    else if (cv_left.result_type == TYPE_INTEGER || cv_left.result_type == TYPE_FLOAT || cv_left.result_type == TYPE_DOUBLE | cv_left.result_type == TYPE_CHARACTER)
    {
        int comparison;
        if (cv_left.num_value < cv_right.num_value)
            comparison = -1;
        else if (cv_left.num_value > cv_right.num_value)
            comparison = 1;
        else
            comparison = 0;

        if (strcmp(operator, "==") == 0)
            result->value = (comparison == 0) ? strdup("true") : strdup("false");
        else if (strcmp(operator, "!=") == 0)
            result->value = (comparison != 0) ? strdup("true") : strdup("false");
        else if (strcmp(operator, "<") == 0)
            result->value = (comparison < 0) ? strdup("true") : strdup("false");
        else if (strcmp(operator, "<=") == 0)
            result->value = (comparison <= 0) ? strdup("true") : strdup("false");
        else if (strcmp(operator, ">") == 0)
            result->value = (comparison > 0) ? strdup("true") : strdup("false");
        else if (strcmp(operator, ">=") == 0)
            result->value = (comparison >= 0) ? strdup("true") : strdup("false");
        else
        {
            result->dataType = strdup("UNDEFINED");
            result->value = strdup("Unknown comparative operator");
            fprintf(stderr, "Unknown comparative operator: %s\n", operator);
            return result;
        }
    }
    else
    {
        result->dataType = strdup("UNDEFINED");
        result->value = strdup("Comparative operation requires both operands to be of a comparable type");
        fprintf(stderr, "Comparative operation requires both operands to be of a comparable type\n");
        return result;
    }
    result->dataType = strdup("BOOLEAN");
    return result;
}
