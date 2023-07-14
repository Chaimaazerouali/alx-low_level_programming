#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
		int x, y;

		for (x = 0; x < 10; x++)
		{
			for (y = x + 1; y < 10; y++)
			{
				putchar(x + 48);
				putchar(y + 48);
				if (x != 8 || y != 9)
				{
					putchar(',');
					putchar(' ');
				}

			}
		}
		putchar('\n');
		return (0);
}
