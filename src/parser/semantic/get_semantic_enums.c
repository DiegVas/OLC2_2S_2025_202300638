#include "semantic.h"
#include <string.h>

ExecuteType get_instruction_type(const char *type_str)
{

    if (strcmp(type_str, "DECLARATION") == 0)
        return DECLARATION;
    if (strcmp(type_str, "ASSIGNMENT") == 0)
        return ASSIGNMENT;
    if (strcmp(type_str, "PRINTLN") == 0)
        return EXP_PRINTLN;
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
    if (strcmp(type_str, "MODULO") == 0)
        return EXP_MODULO;
    if (strcmp(type_str, "NEGATIVE") == 0)
        return EXP_NEGATIVE;
    if (strcmp(type_str, "CASTING") == 0)
        return EXP_CASTING;
    if (strcmp(type_str, "BITWISE_AND") == 0)
        return EXP_BITWISE_AND;
    if (strcmp(type_str, "BITWISE_OR") == 0)
        return EXP_BITWISE_OR;
    if (strcmp(type_str, "BITWISE_XOR") == 0)
        return EXP_BITWISE_XOR;
    if (strcmp(type_str, "BITWISE_LEFT_SHIFT") == 0)
        return EXP_BITWISE_LEFT_SHIFT;
    if (strcmp(type_str, "BITWISE_RIGHT_SHIFT") == 0)
        return EXP_BITWISE_RIGHT_SHIFT;

    return EXP_UNKNOWN;
}
