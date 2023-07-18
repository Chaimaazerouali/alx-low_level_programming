#include <stdio.h>

/**
* main -a program that prints the first 50 Fibonacci numbers
* starting with 1 and 2, followed by a new line.
* Return: 0
*/
int main(void)
{
	int A;
	unsigned long U = 0, W = 1, D;

	for (A = 0; A < 50; A++)
	{
		D = U + W;
		printf("%lu", D);
		U = W;
		W = D;
		if (A == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
