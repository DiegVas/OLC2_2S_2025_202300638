#include "semantic.h"
#include "../structures/parser.h"

List *evaluate_list(List *list, Context *evaluateContext)
{
    List *evaluated_list = List_create();
    ListNode *current = list->head;

    while (current)
    {
        ListData *data = current->listData;
        if (data->listData)
        {
            data->listData = evaluate_list(data->listData, evaluateContext);
        }
        if (data->exprData)
        {
            symbol *da = evaluate_expression(data->exprData, evaluateContext);
            fprintf(stderr, "Evaluated list expression: Type=%s, Value=%s\n", da->dataType, da->value);
        }

        List_add(evaluated_list, data);
        current = current->next;
    }

    return evaluated_list;
}

VectorList *evaluate_vector(char *dataType, VectorList *vec, Context *evaluateContext)
{
    VectorList *evaluated_vector = VectorList_create();
    VectorNode *current = vec->head;

    while (current)
    {
        if (current->exprData)
        {
            symbol *da = evaluate_expression(current->exprData, evaluateContext);
            da = apply_casting_auto(da, dataType);
            fprintf(stderr, "Evaluated vector expression: Type=%s, Value=%s\n", da->dataType, da->value);
            current->value = da;
        }

        VectorList_addSym(evaluated_vector, current->value);
        current = current->next;
    }

    return evaluated_vector;
}

symbol **get_VectorElementPointer(Context *context, Expression *index_exp, char *id)
{
    symbol *index_access = evaluate_expression(index_exp, context);

    if (strcmp(index_access->dataType, "INTEGER") != 0)
        return NULL;

    int index = atoi(index_access->value);

    Context *ctx_search = context;
    while (ctx_search)
    {
        if (SearchID(ctx_search->symbols_context, id))
        {
            symbol *sym = SearchSymbol(ctx_search->symbols_context, id);
            if (strcmp(sym->type, "VECTOR") != 0 || !sym->vectorValues)
                return NULL;

            VectorNode *curr = sym->vectorValues->head;
            int curr_index = 0;
            while (curr)
            {
                if (index == curr_index)
                {
                    return &(curr->value); // Devolver puntero al puntero del símbolo
                }
                curr = curr->next;
                curr_index++;
            }
            return NULL; // Index out of bounds
        }
        ctx_search = ctx_search->after;
    }
    return NULL;
}

symbol *get_VectorElement(Context *context, Expression *index_exp, char *id)
{
    symbol *index_access = evaluate_expression(index_exp, context);

    symbol *result = (symbol *)calloc(1, sizeof(symbol));

    if (strcmp(index_access->dataType, "INTEGER") != 0)
    {
        result->dataType = "UNDEFINED";
        result->value = "Vector index must be of type INTEGER";
        return result;
    }

    int index = atoi(index_access->value);

    Context *ctx_search = context;
    while (ctx_search)
    {
        if (SearchID(ctx_search->symbols_context, id))
        {
            symbol *sym = SearchSymbol(ctx_search->symbols_context, id);
            if (strcmp(sym->type, "VECTOR") != 0 || !sym->vectorValues)
            {
                result->dataType = "UNDEFINED";
                result->value = "Symbol is not a vector or has no values";
                return result;
            }

            VectorNode *curr = sym->vectorValues->head;
            int curr_index = 0;
            symbol *found_symbol = NULL;
            while (curr)
            {

                if (index == curr_index)
                {
                    found_symbol = curr->value;
                }

                curr = curr->next;
                curr_index++;
            }

            if (!found_symbol)
            {
                result->dataType = "UNDEFINED";
                result->value = "Vector index out of bounds";
                return result;
            }
            fprintf(stderr, "Accessed vector element: ID=%s, Index=%d, Type=%s, Value=%s\n",
                    id, index, found_symbol->dataType, found_symbol->value);
            return found_symbol;
        }

        ctx_search = ctx_search->after;
    }
}

char *printVector(VectorList *vec)
{
    char *result = (char *)calloc(1024, sizeof(char));
    strcat(result, "[");

    VectorNode *current = vec->head;
    while (current)
    {
        if (current->value)
        {
            strcat(result, current->value->value);
        }
        else if (current->exprData)
        {
            strcat(result, current->exprData->value);
        }

        if (current->next)
        {
            strcat(result, ", ");
        }
        current = current->next;
    }

    strcat(result, "]");
    return result;
}