#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>
#include "list.h"
#include <inttypes.h>

struct ForwardList
{
    T value;
    struct ForwardList* next;
};

ForwardList* constructList(T element)
{
    ForwardList* n = (ForwardList*)malloc(sizeof(ForwardList));
    n->value = element;
    n->next = NULL;

    return n;
}

void destruct(ForwardList* l)
{
    ForwardList* current = l;
    ForwardList* next;
    while (current != NULL)
    {
        next = current->next;
        free(current);
        current=next;
    }
    l = NULL;
}

ForwardList* getNode(ForwardList* l, size_t index)
{
    ForwardList* current = l;
    
    int count = 0;
    while (current != NULL)
    {
        if (count == index)
        {
            return current;
        }
        else
        {
            ++count;
            current = current->next;
        }
    }
    return NULL;
}
