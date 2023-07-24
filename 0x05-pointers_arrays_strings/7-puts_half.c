#include "main.h"

/**
 *puts_half - Prototype
 *Description:a function that prints half of a string, followed by a new line
 *@str: pointer to string
 */

void puts_half(char *str)
{
		int S;

		for (S = 0; str[S]; S++)
		{
			;
		}
		if (S % 2 == 0)
		{
			S =  S / 2;
			while (str[S])
			{
				_putchar(str[S]);
				S++;
			}
		}
		else
		{
			S = (S + 1) / 2;
			while (str[S])
			{
				_putchar(str[S]);
				S++;
			}
		}
		_putchar('\n');
}
