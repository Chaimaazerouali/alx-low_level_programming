#include <stdio.h>
/**
 * main - entry point
 * Description: prints all possible combinations of single-digit numbers.
 * Return: 0
 */
int main(void)
{
	int x, y, z;

	for (x = 48; x <= 57; x++)
	{
		for (y = x + 1; y <= 57; y++)
		{
			for (z = y + 1; z <= 57; z++)
			{
				putchar(x);
				putchar(y);
				putchar(z);
					if (!(x == 55 && y == 56 && z == 57))
					{
						putchar(',');
						putchar(' ');
					}
																						}
		}
	}
	putchar('\n');
	return (0);
}
