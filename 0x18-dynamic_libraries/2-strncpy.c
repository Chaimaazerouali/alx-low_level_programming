#include "main.h"

/**
* _strncpy - prototype
*  Description: a string function that copies
*  a specified number of characters from one string to another
*  @src:character
*  @dest: character
*  @n:integer
*  Return: (dest)
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] && i < n; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
