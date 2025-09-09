#include "parser.h"
#include <stdbool.h>
#include <string.h>

symbol_table *Symbol_table_create()
{
    symbol_table *table = (symbol_table *)malloc(sizeof(symbol_table));
    table->head = NULL;
    return table;
}

bool SearchID(symbol_table *table, char *id)
{

    symbol_node *current = table->head;
    while (current != NULL)
    {
        if (strcmp(current->data->id, id) == 0)
        {
            return true; // ID encontrado
        }
        current = current->next;
    }
    return false;
}

symbol *SearchSymbol(symbol_table *table, char *id)
{
    symbol_node *current = table->head;
    while (current != NULL)
    {
        if (strcmp(current->data->id, id) == 0)
        {
            return current->data; // ID encontrado
        }
        current = current->next;
    }
    return NULL; // No encontrado
}

void Symbol_table_insert(symbol_table *table, symbol *sym)
{
    symbol_node *new_node = (symbol_node *)malloc(sizeof(symbol_node));
    new_node->data = sym;
    new_node->next = table->head;
    table->head = new_node;
}

void Symbol_table_insertContext(symbol_table *global_table, symbol_table *new_context)
{

    symbol_node *current = new_context->head;
    while (current != NULL)
    {
        Symbol_table_insert(global_table, current->data);
        current = current->next;
    }
}

void Symbol_table_destroy(symbol_table *table)
{
    symbol_node *current = table->head;
    while (current != NULL)
    {
        symbol_node *next = current->next;
        free(current->data);
        free(current);
        current = next;
    }
    free(table);
}