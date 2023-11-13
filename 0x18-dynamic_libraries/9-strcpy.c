#include "main.h"

/**
 * _strcpy - prototype
 * Descpription: copies a string from src to dest
 * @dest: string
 * @src: string
 * Return: dest the string the has src content
 */

char *_strcpy(char *dest, char *src)
{
	int a;

	a = 0;
	while (src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
