#include "parser.h"

List *List_create()
{
    List *list = (List *)malloc(sizeof(List));
    list->head = NULL;
    return list;
}

void List_add(List *list, ListData *listData)
{
    ListNode *newNode = (ListNode *)malloc(sizeof(ListNode));
    newNode->listData = listData;
    newNode->next = NULL;

    if (list->head == NULL)
    {
        list->head = newNode;
    }
    else
    {
        ListNode *current = list->head;
        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = newNode;
    }
}

void List_destroy(List *list)
{
    ListNode *current = list->head;
    while (current != NULL)
    {
        ListNode *temp = current;
        current = current->next;
        free(temp->listData->exprData);
        free(temp->listData);
        free(temp);
    }
    free(list);
}