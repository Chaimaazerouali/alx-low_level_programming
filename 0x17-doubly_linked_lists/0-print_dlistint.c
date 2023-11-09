#include "lists.h"

/**
 * print_dlistint - Print a doubly-linked list of integers.
 * @h: Pointer to the head node.
 *
 * This function prints the elements of a list and returns its size. 
 * Return: The size of the list.
 */
size_t print_dlistint (const dlistint_t *h)
{
	size_t size = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		size++;
	}

	return size;
}

