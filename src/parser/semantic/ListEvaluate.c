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