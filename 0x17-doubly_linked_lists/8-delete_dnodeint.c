#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node at a given index
 * in a doubly linked list.
 * @head: A pointer to a pointer to the head of the list.
 * @index: The index at which to delete the node.
 *
 * Return: 1 if the node is deleted successfully, -1 if not.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *current_node = *head;

    if (!current_node)
    {
        return -1; // Empty list, unable to delete
    }

    if (index == 0)
    {
        *head = current_node->next;
        if (current_node->next)
        {
            current_node->next->prev = NULL;
        }
        free(current_node);
        return 1; // Node deleted successfully
    }

    while (index > 0 && current_node)
    {
        current_node = current_node->next;
        index--;
    }

    if (!current_node)
    {
        return -1; // Index out of range, unable to delete
    }

    if (current_node->prev)
    {
        current_node->prev->next = current_node->next;
    }

    if (current_node->next)
    {
        current_node->next->prev = current_node->prev;
    }

    free(current_node);
    return 1; // Node deleted successfully
}

