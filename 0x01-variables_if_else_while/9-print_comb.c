#include <stdio.h>

/**
 * main - Entry point
 * Descriptrion:all possible combinations of single-digit numbers.
 * Return: 0
 */

int main(void)
{
		int N;

		for (N = 48; N <= 57; N++)
		{
			putchar(N);

			if (N != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
		putchar('\n');

		return (0);
}
