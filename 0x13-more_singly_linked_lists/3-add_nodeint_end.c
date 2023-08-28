#include "lists.h"

/**
* add_nodeint_end - Appends a new node with the given data
* at the end of a listint_t list.
* @head: Pointer to a pointer to the head of the linked list.
* @n: Integer data to append at the end.
* Return: Address of the new node, or NULL if memory allocation fails.
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nn;
	listint_t *tmp;

	if (head == NULL)
		return (NULL);

	nn = malloc(sizeof(listint_t));
	if (!nn)
		return (NULL);

	nn->n = n;
	nn->next = NULL;

	if (!*head)
		*head = nn;
	else
	{
		tmp = *head;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = nn;
	}

	return (nn);
}
