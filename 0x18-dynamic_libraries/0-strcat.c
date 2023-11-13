#include "main.h"

/**
 * _strcat - prototype
 * Description: a function used to concatenate two strings.
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * Return: (dest)
 */

char *_strcat(char *dest, char *src)
{
	int a, b;

	for (a = 0; dest[a]; a++)
	{
		;
	}
	for (b = 0; src[b]; b++)
	{
		dest[a] = src[b];
		a++;
	}
	return (dest);
}
