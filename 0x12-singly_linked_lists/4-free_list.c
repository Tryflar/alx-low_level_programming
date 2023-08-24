#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Release memory occupied by a linked list
 * @head: The list_t list to be deallocated
 */
void free_list(list_t *head)
{
    list_t *temp;

    while (head)
    {
        temp = head->next;
        free(head->str);
        free(head);
        head = temp;
    }
}
