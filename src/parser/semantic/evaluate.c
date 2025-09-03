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
        result->type = "INTEGER";
        break;
    case EXP_FLOAT:
        result->value = strcmp(expr->value, "UNDEFINED") == 0 ? strdup("0.0") : strdup(expr->value);
        result->type = "FLOAT";
        break;
    case EXP_STRING:
        result->value = strcmp(expr->value, "UNDEFINED") == 0 ? strdup("NULL") : strdup(expr->value);
        result->type = "STRING";
        break;
    case EXP_BOOLEAN:
        result->value = strcmp(expr->value, "UNDEFINED") == 0 ? strdup("false") : strdup(expr->value);
        result->type = "BOOLEAN";
        break;
    case EXP_CHARACTER:
        result->value = strcmp(expr->value, "UNDEFINED") == 0 ? strdup("'\0'") : strdup(expr->value);
        result->type = "CHARACTER";
        break;
    case EXP_DOUBLE:
        result->value = strcmp(expr->value, "UNDEFINED") == 0 ? strdup("0.0") : strdup(expr->value);
        result->type = "DOUBLE";
        break;
    case EXP_SUM:
        return perform_arithmetic_operation(exprIZQ, exprDER, context, '+');
    case EXP_SUBTRACT:
        return perform_arithmetic_operation(exprIZQ, exprDER, context, '-');
    case EXP_MULTIPLICATION:
        return perform_arithmetic_operation(exprIZQ, exprDER, context, '*');
    case EXP_DIVIDE:
        return perform_arithmetic_operation(exprIZQ, exprDER, context, '/');
    case EXP_CASTING:
    {
        symbol *left_val = evaluate_expression(exprIZQ, context);
        return apply_casting_manual(left_val, expr->value);
    }
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
        else
        {
            result->type = "UNDEFINED";
            result->value = "Variable no definida";
            result->environment = context->nombre;
            return result;
        }
    }
    default:
        return NULL;
    }
}