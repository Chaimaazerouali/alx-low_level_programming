#include "lists.h"

/**
*print_listint_safe - prints a listint_t linked list, even if it has a loop.
*nn (num of nudes) :Variable to count the number of nodes in the list.
*1- Check if the list is empty.
*	Exit with an error code if the list is empty.
*2- Start from the head of the list and Traverse the list,
*and print each node's address and value.
*	Increment the node count.
*	Detect if there is a loop in the list.
*	Stop the loop to avoid infinite printing in case of a loop.
*@head: pointer to the head of the list.
*Return: the number of nodes in the list.
*/
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current, *tmp;

	size_t nn = 0;

	if (head == NULL)
	{
		exit(98);
	}

	current = head;
	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		nn++;
		tmp = current;
		current = current->next;

		if (tmp < current)
		{
			printf("-> [%p] %d\n", (void *)current, current->n);
			break;
		}
	}
	return (nn);
}
