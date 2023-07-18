#include <limits.h>
#include "main.h"

/**
 *print_last_digit- a function that prints the last digit of a number.
 *@l: parameter
 * Return: succes
 */

int print_last_digit(int l)
{
	if (l == INT_MIN)
	{
		l = -(INT_MIN % 10);
		_putchar(l + '0');
		return (l);
	}
	if (l < 0)
	{
		l = -1 * l;
	}
	l = l % 10;
	_putchar(l + '0');
	return (l);
}
