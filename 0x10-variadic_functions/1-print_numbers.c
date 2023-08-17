#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers separated by a specified string.
 * @separator: The string to be printed between numbers.
 * @n: The number of arguments.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg_list;
	unsigned int index = 0;
	int current_arg;

	va_start(arg_list, n);
	while (index < n)
	{
		current_arg = va_arg(arg_list, int);
		printf("%d", current_arg);
		if (index + 1 < n)
		{
			if (separator)
				printf("%s", separator);
		}
		index++;
	}
	va_end(arg_list);
	printf("\n");
}
