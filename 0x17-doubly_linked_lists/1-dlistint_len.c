#include "lists.h"

/**
 * dlistint_len - Return the length of a doubly-linked list.
 * @h: Pointer to the head node.
 *
 * This function calculates and returns the number of elements in a doubly-linked list.
 *
 * Return: The size of the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t size = 0;

	while (h)
	{
		h = h->next;
		size++;
	}

	return (size);
}

