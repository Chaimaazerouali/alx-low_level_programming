#include "main.h"

/**
* _puts_recursion - Prototyppe
* Description: a function that prints a string.
* @str : Printed string
*/

void _puts_recursion(char *str)
{
	if (*str  == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*str);
	_puts_recursion(str + 1);
}
