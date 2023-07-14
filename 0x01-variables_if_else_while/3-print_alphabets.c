#include <stdio.h>

/**
 * main - Entry point
 * Descrippton :prints the alphabet in lowercase, and then in uppercase
 * Return: 0
 */

int main(void)
{
		char alphabet;

		for (alphabet = 97; alphabet <= 122; alphabet++)
		{
			putchar(alphabet);
		}

		for (alphabet = 65; alphabet <= 90; alphabet++)
		{
			putchar(alphabet);
		}

		putchar('\n');

		return (0);
}
