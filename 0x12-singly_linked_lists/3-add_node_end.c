#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
    list_t *new;
    list_t *temp = *head;
    unsigned int string_length = 0; // Changed variable name to 'string_length'

    while (str[string_length])
        string_length++;

    new = malloc(sizeof(list_t));
    if (!new)
        return (NULL);

    new->str = strdup(str);
    new->len = string_length;
    new->next = NULL;

    if (*head == NULL)
    {
        *head = new;
        return (new);
    }

    while (temp->next)
        temp = temp->next;

    temp->next = new;

    return (new);
}

