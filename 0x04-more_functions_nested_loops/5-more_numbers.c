#include "main.h"

/**
* more_numbers function that prints 10 times the numbers, from 0 to 14
*/

void more_numbers(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		b = 0;
		do {
			if (b >= 10)
				_putchar('1');
			_putchar(b % 10 + '0');
			b++;
		} while (b <= 14);
		_putchar('\n');
	}
}
