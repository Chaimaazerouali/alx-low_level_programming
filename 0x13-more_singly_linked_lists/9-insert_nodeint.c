#include "lists.h"
/**
*insert_nodeint_at_index - Inserts a new node at a given position
* in a listint_t linked list.
* @head: Double pointer to the first node of the linked list.
* @idx: The index of the list where the new node should be added.
* @n: Integer data for the new node.
* Return: the address of the new node, or NULL if it failed.
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current, *temp = malloc(sizeof(listint_t));
	unsigned int i;

	if (!head || !temp)
	{
		return (NULL);
	}
	temp->n = n;
	temp->next = NULL;

	if (idx == 0)
	{
		temp->next = *head;
		*head = temp;
		return (temp);
	}
	current = *head;
	for (i = 0; i < idx - 1 && current; i++)
	{
		current = current->next;
	}
	if (!current)
	{
		free(temp);
		return (NULL);
	}
	temp->next = current->next;
	current->next = temp;
	return (temp);
}
