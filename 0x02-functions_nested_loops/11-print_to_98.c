#include <stdio.h>
#include "main.h"

/**
 * print_to_98 -a function that prints all natural numbers from n to 98
 * @p: used to print
 */

void print_to_98(int p)
{
	int a, b;

	if (p <= 98)
	{
		for (a = p; a <= 98; a++)
		{
			if (a != 98)
				printf("%d, ", a);
			else if (a == 98)
				printf("%d\n", a);
		}
	} else if (p >= 98)
	{
		for (b = p; b >= 98; b--)
		{
			if (b != 98)
				printf("%d, ", b);
			else if (b == 98)
				printf("%d\n", b);
		}
	}
}
