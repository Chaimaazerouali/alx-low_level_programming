#include "main.h"

/**
 * _strchr - Prototype
 * Description: a function fills memory with a constant byte.
 * @s: Buffer
 * @c: n bytes of memory
 * Return: s
 *
 *
 */

char *_strchr(char *s, char c)
{

	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
		if (c == '\0')
		return (s);
	return ('\0');
}
