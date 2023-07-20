#include "main.h"

/**
*print_line - a function that draws a straight line in the terminal.
*@n: integer
*/

void print_line(int n)
{
	int a = 0;

	while (a < n)
	{
		a++;
		_putchar('_');
	}

	_putchar('\n');
}
