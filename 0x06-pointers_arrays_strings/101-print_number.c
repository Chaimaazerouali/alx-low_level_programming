#include "main.h"

/**
 *print_number - prototype
 *a function that prints an integer.
 *@n: the printed integer
 */

void print_number(int n)
{
	if (n == -2147483648)
	{
		_putchar('-');
		_putchar('2');
		print_number(147483648);
	}
	else if (n > 9)
	{
		print_number(n / 10);
		print_number(n % 10);
	}
	else if (n <= -1)
	{
		_putchar('-');
		print_number(-n);
	}
	else
		_putchar(n + '0');
}
