#include "main.h"

/**
 * _strncat - checker
 * @dest: pointer
 * @src: pointer
 * @n: int
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	for (x = 0; dest[x] != '\0'; x++)
		;
	for (y = 0; src[y] != '\0'; y++, x++)
	{
		if (n > 0)
		{
			dest[x] = src[y];
			n--;
		}
	}
	return (dest);
}
