#include "main.h"

/**
 *_isupper - a function that checks for uppercase character
 * @c:represents a character or an integer value that will be
 * checked to determine whether it is an uppercase letter or not
 * Return: 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
