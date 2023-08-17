#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - Prints any type of argument based on the format string.
 * @format: A list of types of arguments passed to the function.
 */
void print_all(const char *const format, ...)
{
	int index;
	char *current_string, *separator = "";
	va_list args_list;

	index = 0;
	va_start(args_list, format);
	while (format != NULL && format[index] != '\0')
	{
		separator = "";
		switch (format[index])
		{
		case 'i':
			printf("%d", va_arg(args_list, int));
			separator = ", ";
			break;
		case 'c':
			printf("%c", va_arg(args_list, int));
			separator = ", ";
			break;
		case 'f':
			printf("%f", va_arg(args_list, double));
			separator = ", ";
			break;
		case 's':
			current_string = va_arg(args_list, char *);
			separator = ", ";
			if (current_string == NULL || current_string[0] == '\0')
			{
				printf("(nil)");
				break;
			}
			printf("%s", current_string);
			break;
		}
		index++;
		if (format[index] != '\0')
			printf("%s", separator);
	}
	va_end(args_list);
	printf("\n");
}
