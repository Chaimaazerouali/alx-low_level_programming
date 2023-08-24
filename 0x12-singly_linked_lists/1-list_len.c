#include "lists.h"

/**
* print_list - a function that prints all the elements of a list_t list.
* @h: Pointer to the head of the list.
* Return: the number of nodes.
*/
size_t print_list(const list_t *h)
{
	char *str;
	unsigned int len;
	int i = 0;

	while (h)
	{
		len = h->len;
		str = h->str;
		if (str)
		{
			printf("[%d] %s\n", len, str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		h = h->next;
		i++;
	}
	return (i);
}
