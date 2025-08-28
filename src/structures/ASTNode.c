#include <stdlib.h>
#include "token_list.h"

// Añadir hijo a ASTNode
void ASTNode_addChild(ASTNode *parent, ASTNode *child)
{
    if (!parent || !child)
        return;
    ASTNodeList *newChild = (ASTNodeList *)malloc(sizeof(ASTNodeList));
    newChild->node = child;
    newChild->next = NULL;
    if (!parent->children)
    {
        parent->children = newChild;
    }
    else
    {
        ASTNodeList *curr = parent->children;
        while (curr->next)
            curr = curr->next;
        curr->next = newChild;
    }
}