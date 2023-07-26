#include "main.h"

/**
 * _strcmp - prototype
 * Description:a function compares 2 strings
 * @s1: string
 * @s2:string
 * Return: s
 */

int _strcmp(char *s1, char *s2)
{
	for (; *s1 == *s2; s1++, s2++)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
	}
	return (*s1 - *s2);
}
