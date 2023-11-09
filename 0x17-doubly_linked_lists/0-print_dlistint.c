#include "lists.h"
/**
*print_dlistint - Prints the elements of a doubly linked list.
*@h: A pointer to the head of the list.
*Return: the size of the list
*/
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *curr = h;
	size_t list_size = 0;

	if (!curr)
		return (0);
	while (curr)
	{
		printf("%d\n", curr->n);
		curr = curr->next;
		list_size++;
	}
	return (list_size);
}

