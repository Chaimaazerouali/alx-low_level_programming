#include "lists.h"
/**
* find_listint_loop - function that finds the loop in a linked list.
* using Floyd's Tortoise and Hare algorithm.
* @head: Pointer to the head of the listint_t list.
* Return: The address of the node where the loop starts,
* or NULL if there is no loop.
*/

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *turtle, *hare;

	if (head == NULL || head->next == NULL)
		return (NULL);

	turtle = head->next;
	hare = (head->next)->next;

	while (hare)
	{
		if (turtle == hare)
		{
			turtle = head;

			while (turtle != hare)
			{
				turtle = turtle->next;
				hare = hare->next;
			}

			return (turtle);
		}

		turtle = turtle->next;
		hare = (hare->next) ? (hare->next)->next : NULL;
	}

	return (NULL);
}
