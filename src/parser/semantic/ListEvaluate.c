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
