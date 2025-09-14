#include "parser.h"

ExpressionList *create_expression_list()
{
    ExpressionList *list = (ExpressionList *)calloc(1, sizeof(ExpressionList));
    list->head = NULL;
    return list;
}

void ExpressionList_add(ExpressionList *list, Expression *expr)
{
    ExpressionNode *newNode = (ExpressionNode *)calloc(1, sizeof(ExpressionNode));
    newNode->expr = expr;
    newNode->next = NULL;

    if (list->head == NULL)
    {
        list->head = newNode;
    }
    else
    {
        ExpressionNode *current = list->head;
        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = newNode;
    }
}