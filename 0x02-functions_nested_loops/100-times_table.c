#include "main.h"

/**
 * print_times_table -a function that prints the n times table, starting with 0
 * @T: number of the times table
 */

void print_times_table(int T)
{
	int a, b, t;

	if (T >= 0 && T <= 15)
	{
		for (a = 0; a <= T; a++)
		{
			for (b = 0; b <= T; b++)
			{
				t = b * a;
				if (b == 0)
				{
					_putchar(t + '0');
				} else if (t < 10 && b != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(t + '0');
				} else if (t >= 10 && t < 100)
				{
					_putchar(',');
					_putchar(' ');
					 _putchar(' ');
					 _putchar((t / 10) + '0');
					 _putchar((t % 10) + '0');
				} else
				{
					  _putchar(',');
					  _putchar(' ');
					  _putchar((t / 100) + '0');
					  _putchar(((t / 10) % 10) + '0');
					  _putchar((t % 10) + '0');
				}
			}
			 _putchar('\n');
		}
	}
}
