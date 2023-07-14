#include <stdio.h>

/**
 *main - Entry point
 * Description: prints the alphabet in lowercase
 * Return: 0
 */

int main(void)
{
		char lowercase;

		for (lowercase = 97; lowercase <= 122; lowercase++)
		{
			putchar(lowercase);
		}

		putchar('\n');

		return (0);
}
