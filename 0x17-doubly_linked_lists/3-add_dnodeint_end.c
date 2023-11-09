#include "lists.h"
/**
*add_dnodeint_end - Adds a new node at the end of a doubly linked list.
*@head: A pointer to a pointer to the head of the list.
*@n: The data to be stored in the new node.
*Return: A pointer to the newly created node, or NULL on failure.
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	new_node->prev = NULL;
	new_node->n = n;
	new_node->next = NULL;

	if (!*head)
	{
		*head = new_node;
		return (new_node);
	}
	current = *head;

	while (current->next)
		current = current->next;

	current->next = newnode;
	new_node->prev = current;

	return (new_node);
}
