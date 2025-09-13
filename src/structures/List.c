#include "parser.h"

//* Para vectores

VectorList *VectorList_create()
{
    VectorList *list = (VectorList *)malloc(sizeof(VectorList));
    list->head = NULL;
    return list;
}

void VectorList_addExp(VectorList *list, Expression *exprData)
{
    VectorNode *newNode = (VectorNode *)malloc(sizeof(VectorNode));
    newNode->exprData = exprData;
    newNode->next = NULL;

    if (list->head == NULL)
    {
        list->head = newNode;
    }
    else
    {
        VectorNode *current = list->head;
        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = newNode;
    }
}

void VectorList_addSym(VectorList *list, symbol *sym)
{
    VectorNode *newNode = (VectorNode *)malloc(sizeof(VectorNode));
    newNode->value = sym;
    newNode->next = NULL;

    if (list->head == NULL)
    {
        list->head = newNode;
    }
    else
    {
        VectorNode *current = list->head;
        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = newNode;
    }
}

//* Para matrices

void MatrixList_add(MatrixList *matrix, VectorList *vectorList)
{
    matrixNode *newNode = (matrixNode *)malloc(sizeof(matrixNode));
    newNode->vector = vectorList;
    newNode->next = NULL;

    if (matrix->head == NULL)
    {
        matrix->head = newNode;
    }
    else
    {
        matrixNode *current = matrix->head;
        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = newNode;
    }
}

MatrixList *MatrixList_create()
{
    MatrixList *list = (MatrixList *)malloc(sizeof(MatrixList));
    list->head = NULL;
    return list;
}

List *
List_create()
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