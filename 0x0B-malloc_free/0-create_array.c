#include <stdlib.h>
#include "main.h"

/**
 * create_array - function
 * creates an array of char & initializes it with a specific char
 * @size: +variable
 * @c: char
 * Return: NULL or V of ptr
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	ptr = malloc(sizeof(char) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = c;
	return (ptr);
}
