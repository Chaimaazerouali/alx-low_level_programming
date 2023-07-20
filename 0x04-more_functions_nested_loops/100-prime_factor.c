#include <stdio.h>

/**
 * main - Entry point
 * Description: a program that finds and prints
 * the largest prime factor of the number 612852475143
 * Return: 0
 */

int main(void)
{
	long int n = 612852475143;
	long int GD = 1;
	long int D = 3;

		do {
			while (n % D == 0)
			{
				GD = D;
				n /= D;
			}
			D += 2;
		} while (D * D <= n);
		if (n > 2)
		{
			GD = n;
		}

		printf("%ld\n", GD);
	return (0);
}
