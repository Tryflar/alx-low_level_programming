#include <stdio.h>
#include "lists.h"

/**
 * print_list - Display all elements of a linked list
 * @h: Pointer to the list_t list for display
 *
 * Return: Count of printed nodes
 */
size_t print_list(const list_t *h)
{
    size_t nodeCount = 0;

    while (h)
    {
        if (!h->str)
            printf("[0] (nil)\n");
        else
            printf("[%u] %s\n", h->len, h->str);

        h = h->next;
        nodeCount++;
    }

    return nodeCount;
}
