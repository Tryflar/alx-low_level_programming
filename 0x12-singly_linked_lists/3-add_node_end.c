#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Append a new node to the end of a linked list
 * @head: Double pointer to the list_t list
 * @str: String to store in the new node
 *
 * Return: Address of the new node, or NULL if it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
    list_t *newNode;
    list_t *temp = *head;
    unsigned int length = 0;

    while (str[length])
        length++;

    newNode = malloc(sizeof(list_t));
    if (!newNode)
        return NULL;

    newNode->str = strdup(str);
    newNode->len = length;
    newNode->next = NULL;

    if (*head == NULL)
    {
        *head = newNode;
        return newNode;
    }

    while (temp->next)
        temp = temp->next;

    temp->next = newNode;

    return newNode;
}
