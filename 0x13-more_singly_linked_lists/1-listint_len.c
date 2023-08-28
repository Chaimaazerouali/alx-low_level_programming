#include "lists.h"

/**
* listint_len - Counts the number of elements in a linked listint_t list.
* @h: Pointer to the head of the list.
* Return: The number of elements in the linked list.
*/
size_t listint_len(const listint_t *h)
{
	int ne = 0;

	while (h)
	{
		ne++;
		h = h->next;
	}

	return (ne);
}
