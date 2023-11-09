#include "lists.h"

/**
* insert_dnodeint_at_index - Inserts a new node in a given position.
* @h: A pointer to the head of the dlistint_t list.
* @idx: The position to insert the new node.
* @n: The integer for the new node to contain.
*
* Return: If the function fails - NULL. Otherwise - the address of the node.
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *current = *h, *new_node;

if (idx == 0)
{
return (add_dnodeint(h, n)); /* Insert at the beginning*/
}

for (; idx != 1; idx--)
{
current = current->next;
if (current == NULL)
{
return (NULL); /* Index out of range*/
}
}

if (current->next == NULL)
{
return (add_dnodeint_end(h, n)); /* Insert at the end*/
}

new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
{
return (NULL); /* Memory allocation failed */
}

new_node->n = n;
new_node->prev = current;
new_node->next = current->next;
current->next->prev = new_node;
current->next = new_node;

return (new_node);
}

