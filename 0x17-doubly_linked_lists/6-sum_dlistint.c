#include "lists.h"

/**
 * sum_dlistint - Sums the values of a doubly linked list.
 * @head: Pointer to the current head node.
 *
 * Return: The sum of values in the list.
 */
int sum_dlistint(dlistint_t *head)
{
    int sum = 0;

    while (head)
    {
        sum += head->n;
        head = head->next;
    }

    return sum;
}

