#include <stdio.h>

/**
 *main -a program that computes
 *and prints the sum of all the multiples of 3 or 5 below 1024
 * Return: 0
 */
int main(void)
{
	int Y = 1;
	int S = 0;

	while (Y < 1024)
	{
		if (Y % 3 == 0)
			S += Y;
		else if (Y % 5 == 0)
			S += Y;
		Y++;
	}
	printf("%d\n", S);
	return (0);
}
