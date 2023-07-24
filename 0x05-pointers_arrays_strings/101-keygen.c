#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Entry point
* Descripption: a program that generates random valid
* passwords for the program 101-crackme
* Return: 0
*/

int main(void)
{
	int p[100];
	int a;
	int S;
	int b;

	S = 0;

	srand(time(NULL));
	a = 0;
		do {
			p[a] = rand() % 78;
			S += (p[a] + '0');
			putchar(p[a] + '0');
			if ((2772 - S) - '0' < 78)
			{
				b = 2772 - S - '0';
				S += b;
				putchar(b + '0');
				break;
			}
			a++;
		} while (a < 100);

	return (0);
}
