#include <stdio.h>
#define LARGEST 10000000000

/**
* main - a program that finds and prints the first 98 Fibonacci numbers
* starting with 1 and 2, followed by a new line.
* Return: 0
*/
int main(void)
{
	unsigned long int a1 = 0;
	unsigned long int b1 = 1;
	unsigned long int a2 = 0;
	unsigned long int b2 = 2;
	unsigned long int t1;
	unsigned long int t2;
	unsigned long int t3;
	int R;

	printf("%lu, %lu, ", b1, b2);
	for (R = 2; R < 98; R++)
	{
		if (!(b1 + b2 <= LARGEST && a2 <= 0 && a1 <= 0))
		{
			t1 = (b1 + b2) / LARGEST;
			t2 = (b1 + b2) % LARGEST;
			t3 = a1 + a2 + t1;
			a1 = a2, a2 = t3;
			b1 = b2, b2 = t2;
			printf("%lu%010lu", a2, b2);
		}
		else
		{
			t2 = b1 + b2;
			b1 = b2, b2 = t2;
			printf("%lu", b2);
		}
		if (R != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
