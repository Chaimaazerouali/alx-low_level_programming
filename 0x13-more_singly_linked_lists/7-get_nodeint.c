#include "lists.h"

/**
* get_nodeint_at_index - Returns the nth node of a listint_t linked list.
* @head: Pointer to the first node of the linked list.
* @index: Position in the list starting from 0.
* Return: The node at the specified index, or NULL if the node does not exis.
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;
	listint_t *current = head;

	if (!head)
		return (NULL);

	for (count = 0; count < index; count++)
	{
		current = current->next;
		if (current == NULL)
			return (NULL);
	}

	return (current);
}
