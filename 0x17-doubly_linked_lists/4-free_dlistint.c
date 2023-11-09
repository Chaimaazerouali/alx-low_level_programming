#include "lists.h"

/**
 * free_dlistint - Frees a doubly linked list.
 * @head: Pointer to the current head node.
 *
 * This function frees the memory occupied by a doubly linked list.
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *current_node;

while (head)
{
current_node = head;
head = head->next;
free(current_node);
}
}

