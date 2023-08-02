#include "main.h"

/**
* _print_rev_recursion - Prototype
* Description: a function that prints a string in reverse.
* @str : Printed string
*/

void _print_rev_recursion(char *str)
{
	if (*str != '\0')
	{
		_print_rev_recursion(str + 1);
		_putchar(*str);
	}
}
