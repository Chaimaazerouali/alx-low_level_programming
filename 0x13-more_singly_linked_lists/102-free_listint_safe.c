#include "lists.h"
/**
* free_listint_safe - Frees a linked list safely to avoid double freeing.
* @h: Pointer to the pointer of the first node in the linked list.
* Return: The number of elements in the freed list.
*/
size_t free_listint_safe(listint_t **h)
{
	size_t el_freed = 0;
	int difference;
	listint_t *tmp_node;

	if (!h || !*h)
		return (0);

	for (; *h; el_freed++)
	{
		difference = *h - (*h)->next;
		if (difference > 0)
		{
			tmp_node = (*h)->next;
			free(*h);
			*h = tmp_node;
		}
		else
		{
			free(*h);
			*h = NULL;
			break;
		}
	}

	*h = NULL;

	return (el_freed);
}
