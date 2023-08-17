#include "variadic_functions.h"

/**
 * sum_them_all - Sums up a variable number of integers.
 * @n: The number of integers to be summed.
 * Return: The sum of all the integers.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int sum = 0;
	va_list arg;

	if (n == 0)
		return (0);
	va_start(arg, n);
	while (i < n)
	{
		sum += va_arg(arg, int);
		i++;
	}
	va_end(arg);
	return (sum);
}
