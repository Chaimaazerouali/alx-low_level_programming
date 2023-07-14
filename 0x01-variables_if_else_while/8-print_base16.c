#include <stdio.h>
/**
 * main - entry point
 * Description: all the numbers of base 16 in lowercase.
 * Return: 0
 */
int main(void)
{
		char N;

		for (N = 48; N <= 57; N++)
		{
		putchar(N);
		}

		for (N = 97; N <= 102; N++)
		{
		putchar(N);
		}

		putchar('\n');
		return (0);
}
