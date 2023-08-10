#include "main.h"

/**
 * _atoi - checker
 * @s: pointer
 * Return: num mult s
 */
int _atoi(char *s)
{
	int x = 1;
	unsigned int num = 0;

	do {
		if (*s == '-')
			x *= -1;

		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');

		else if (num > 0)
			break;
	} while (*s++);

	return (num * x);
}
