#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * Description:  a function that prints 10 times the alphabet, in lowercase
 */
void print_alphabet_x10(void)
{
	int x, y;

	for (x = 0; x <= 9; x++)
	{
		for (y = 97; y <= 122; y++)
		{
			_putchar(y);
		}
		_putchar('\n');
	}

}
