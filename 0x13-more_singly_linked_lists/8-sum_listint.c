#include "lists.h"
/**
* sum_listint - function that returns
* the sum of all the data (n) of a listint_t linked list.
* @head: Pointer to the head of the linked list.
* Return: The sum of all elements in the list, or 0 if the list is empty.
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
