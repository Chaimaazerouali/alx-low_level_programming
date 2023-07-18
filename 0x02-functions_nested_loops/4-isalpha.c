#include "main.h"

/**
 * _isalpha - is a function that checks for alphabetic characters
 * @c: char type letter
 * Return: 0 or 1
 */

int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
		return (1);
	else
		return (0);
}
