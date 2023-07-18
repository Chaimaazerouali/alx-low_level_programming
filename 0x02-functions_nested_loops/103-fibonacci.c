#include <stdio.h>

/**
 * main -a program that finds and prints the sum of the even-valued terms
 * Return: 0
 */
int main(void)
{
	int a = 1, b = 2, S = 0;
	int R;

	do {
		if (b % 2 == 0)
			S += b;
		R = b;
		b += a;
		a = R;
	} while (b < 4000000);
	printf("%d\n", S);
	return (0);
}
