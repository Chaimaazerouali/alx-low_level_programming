#include "main.h"

/**
* _strpbrk - Prototype
* Description: a function searches a string for any of a setof bytes
* @accept: bytes to look for
* @s: string
*
* Return: s or \0
*
*/


char *_strpbrk(char *s, char *accept)
{
	int a, b;

	for (a = 0; *s != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (*s == accept[b])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
