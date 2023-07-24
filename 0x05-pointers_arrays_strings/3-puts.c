#include "main.h"

/**
 * _puts - prototype
 * Description: print string to stdout
 * @str: pointer
 * Return: 0
 */

void _puts(char *str)
{
	int a;

	for (a = 0; str[a]; a++)
	{
	if (str[a] != '\0')
	{
		_putchar(str[a]);
	}
	else
		continue;
	}
	_putchar('\n');
}
