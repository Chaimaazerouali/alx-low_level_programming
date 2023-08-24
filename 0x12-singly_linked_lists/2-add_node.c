#include "lists.h"

int _strlen(const char *str);
/**
* add_node- a function that adds a new node at the beginning of a list_t list.
* @head: pointer to a pointer to the head of the list.
* @str: str.
* Return: the address of the new element, or NULL if it failed.
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
	{
		return (NULL);
	}
	else
	{
		new_node->str = strdup(str);
		if (new_node->str == NULL)
		{
			free(new_node);
			return (NULL);
		}
		new_node->len = _strlen(str);
		new_node->next = *head;
		*head = new_node;
	}
	return (new_node);
}
/**
* _strlen - a func return the length of a string.
* @str: string.
* Return: length of string.
*/
int _strlen(const char *str)
{
	int i = 0;

	while (str[i])
	{
		i++;
	}
	return (i);
}
