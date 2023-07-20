#include "main.h"

/**
* print_triangle -a function that prints a triangle, followed by a new line.
* * @size: integer
*/

void print_triangle(int size)
{
	int a, b;

	if (size < 1)
	{
		_putchar('\n');
	}
	for (a = 0; a < size; a++)
	{
		for (b = 0; b < size; b++)
		{
			if (b < size - a - 1)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
}
