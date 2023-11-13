#include "main.h"

/**
 * _memcpy - prototype
 * Description: a function that copies memory area
 * @n: bytes
 * @dest: copy to
 * @src: memory
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
