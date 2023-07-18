#include "main.h"

/**
 * print_sign - is a function that prints the sign of a number.
 * @n: int type
 *
 * Determines the sign of an integer.
 * Return: 1 or -1 o/r 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
