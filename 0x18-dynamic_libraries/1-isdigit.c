#include "main.h"

/**
 * * _isdigit - a function that checks for a digit (0 through 9)
 * * @c: int
 * Return: 1 or 0
 */

int _isdigit(int c)
{
	/*48 =0 and 57 = 9*/
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
