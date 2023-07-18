#include "main.h"
/**
 * print_alphabet - entry point
 * Description:  a function that prints the alphabet, in lowercase..
 * Return: 0
 */
void print_alphabet(void)
{
	int i = 97;

	do {
		_putchar(i);
		i++;
		} while (i <= 122);

	_putchar('\n');
}
