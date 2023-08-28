#include "lists.h"

/**
* pop_listint - Deletes the head node of a listint_t list and returns its data.
* @head: Pointer to a pointer to the head of the linked list.
* Return: the head node’s data (n)., or 0 if the list is empty.
*/
int pop_listint(listint_t **head)
{
	int n;
	listint_t *new_head;

	if (!*head)
		return (0);

	new_head = *head;
	n = new_head->n;
	*head = new_head->next;

	free(new_head);

	return (n);
}
