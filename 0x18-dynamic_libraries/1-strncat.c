#include "main.h"

/**
 *_strncat - prototype
 * Description: function used to concatenate two strings
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * @n: integer
 * Return: (dest)
 */

char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

		for (a = 0; dest[a]; a++)
		{
			;
		}
		for (b = 0; src[b] && b < n; b++)
		{
			dest[a] = src[b];
			a++;
		}
		dest[a] = '\0';
		return (dest);
}
