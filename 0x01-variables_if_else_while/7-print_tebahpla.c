#include <stdio.h>

/**
 * main - Entry point
 * Description: the lowercase alphabet in reverse.
 * Return: 0
 */

int main(void)
{
		char L = 122;

		while (L >= 97)
		{
			putchar(L);
			L--;
		}

		putchar('\n');

		return (0);
}
