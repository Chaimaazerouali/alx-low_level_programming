#include "main.h"

/**
 * print_number - a function that prints an integer
 * @n: integer
 */

void print_number(int n)
{
	unsigned int N;

	N = n;
	if (n <= -1)
	{
		_putchar('-');
		N = -N;
	}
	if ((N / 10) >= 1)
		print_number(N / 10);
	_putchar((N % 10) + '0');
}
