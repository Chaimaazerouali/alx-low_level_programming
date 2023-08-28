#include "lists.h"
/**
* free_listint2 - Frees a listint_t list and sets the head pointer to NULL.
* @head: Pointer to a pointer to the first node of the linked list.
*/
void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *nn;

	if (!head || !*head)
		return;
	current = *head;
	while (current)
	{
		nn = current->next;
		free(current);
		current = nn;
	}
	*head = NULL;
}
