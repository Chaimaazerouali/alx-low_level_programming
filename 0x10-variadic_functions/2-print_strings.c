#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - Prints strings separated by a specified string.
 * @separator: The string to be printed between strings.
 * @n: The number of arguments.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg_list;
	unsigned int index = 0;
	char *current_arg;

	va_start(arg_list, n);
	while (index < n)
	{
		current_arg = va_arg(arg_list, char *);
		if (current_arg == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", current_arg);
		}
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
