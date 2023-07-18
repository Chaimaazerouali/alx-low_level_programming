#include "main.h"

/**
 * _abs - is a function that computes the absolute value of an integer.
 * @a:parameter
 * Return: succes -1 or 1
 */

int _abs(int a)
{
	if (a >= 0)
	{
		return (a);
	}
	else
	{
		a = a * -1;
		return (a);
	}
}
