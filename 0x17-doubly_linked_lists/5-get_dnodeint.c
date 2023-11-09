#include "lists.h"

/**
 * get_dnodeint_at_index - Gets the dnodeint at a specified index
 * in a doubly linked list.
 * @head: A pointer to the head of the list.
 * @index: The index of the node to retrieve.
 *
 * Return: A pointer to the node at the specified index, or NULL if not found.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    dlistint_t *current_node;

    current_node = head;

    while (index > 0 && current_node)
    {
        index--;
        current_node = current_node->next;
    }

    return current_node;
}

