#include "main.h"

/**
 * _atoi - prototype
 * Description: converts a string to int
 * @s: string
 * Return: value of the string
 */

int _atoi(char *s)
{
	unsigned int n = 0;
	int a = 1;

	do {
		if (*s == '-')
		{
			a *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			n = (n * 10) + (*s - '0');
		}
		else if (n > 0)
			break;
	} while (*s++);

	return (n * a);
}
