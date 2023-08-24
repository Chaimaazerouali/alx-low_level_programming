#include "lists.h"

/**
* free_list - function takes a pointer to the head of a list
* and frees all the nodes in the list.
* @head: Pointer to the head of the list.
*/
void free_list(list_t *head)
{
	list_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node->str);
		free(node);
	}
}
