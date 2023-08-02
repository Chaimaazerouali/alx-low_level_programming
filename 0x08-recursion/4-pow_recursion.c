#include "main.h"

/**
 * _pow_recursion - a function return x raised to the power of y.
 * @b: intger
 * @a: integer
 * Return: -1,1,x raised to the power of y.
*/

int _pow_recursion(int a, int b)
{
	if (b < 0)
	{
		return (-1);
	}
	if (b < 1)
	{
		return (1);
	}
	else
	{
		return (a * _pow_recursion(a, b - 1));
	}
}
