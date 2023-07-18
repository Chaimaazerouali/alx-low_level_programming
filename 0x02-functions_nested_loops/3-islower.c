#include "main.h"
/**
 * _islower - a function that checks for lowercase character.
 * @c: The character to print
 * Return: 0 or 1
 */

int _islower(int c)
{
	if (!(c < 98 || c > 123))
		return (1);
	else
		return (0);
}
