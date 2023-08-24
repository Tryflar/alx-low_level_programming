#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Insert a new node at the start of a linked list
 * @head: Double pointer to the list_t list
 * @str: New string to store in the node
 *
 * Return: Address of the new node, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
    list_t *newNode;
    unsigned int length = 0;

    while (str[length])
        length++;

    newNode = malloc(sizeof(list_t));
    if (!newNode)
        return NULL;

    newNode->str = strdup(str);
    newNode->len = length;
    newNode->next = (*head);
    (*head) = newNode;

    return (*head);
}
