#include "lists.h"
/**
* free_listint - Frees a listint_t list.
* @head: Pointer to the first node of the linked list to be freed.
*/
void free_listint(listint_t *head)
{
	listint_t *current = head;
	listint_t *nn;

	while (current)
	{
		nn = current;
		current = current->next;
		free(nn);
	}
	head = NULL;
}
