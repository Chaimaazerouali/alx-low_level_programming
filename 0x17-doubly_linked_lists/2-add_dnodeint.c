#include "lists.h"

/**
* add_dnodeint - Adds a new node at the beginning of a doubly linked list.
* @head: A pointer to a pointer to the head of the list.
* @n: The data to be stored in the new node.
*
* Return: A pointer to the newly created node.
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new_node = malloc(sizeof(dlistint_t));

if (!new_node)
{
return (NULL); /* Memory allocation failed*/
}

new_node->prev = NULL;
new_node->n = n;
new_node->next = NULL;

if (!*head)
{
*head = new_node;
}
else
{
new_node->next = *head;
(*head)->prev = new_node;
*head = new_node;
}

return (new_node);
}

