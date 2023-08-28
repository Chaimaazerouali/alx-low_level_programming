#include "lists.h"
/**
* delete_nodeint_at_index - function that deletes
* the node at the index of a listint_t linked list.
* @head: Pointer to a pointer to the head of the linked list.
* @index: The index where the deletion occurs.
* Return: 1 if it succeded, -1 if it failed.
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *temp;
	unsigned int i;

	if (!*head)
		return (-1);

	current = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}

	for (i = 0; i < index - 1 && current->next; i++)
		current = current->next;

	if (!current->next)
		return (-1);

	temp = current->next->next;
	free(current->next);
	current->next = temp;
	return (1);
}
