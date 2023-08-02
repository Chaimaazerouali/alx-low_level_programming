#include "main.h"

/**
 * _first_sqrt_recursion - check the code
 * @n: number
 * @a: help
 * Return: integer
 */

int _first_sqrt_recursion(int n, int a)
{
	if (a * a > n)
		return (-1);
	else if (a * a == n)
		return (a);
	else
		return (_first_sqrt_recursion(n, a + 1));
}

/**
 * _sqrt_recursion - checker
 * @n: number
 * Return: square root of n, or -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (1);
	else
		return (_first_sqrt_recursion(n, 2));
}
