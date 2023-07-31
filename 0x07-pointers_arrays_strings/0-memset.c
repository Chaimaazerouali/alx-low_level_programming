#include "main.h"

/**
 * _memset - prototype
 * Description: a function that fills memory with a constant byte.
 * @s : buffer
 * @b:character
 * @n:len
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a = 0;

	while (a < n)
	{
		s[a] = b;
		a++;
	}
	return (s);
}
