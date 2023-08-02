#include "main.h"

/**
 * factorial - Prototype
 * Description: a function that returns the factorial of a given number.
 * @n : integer number
 * Return: factorial
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	else
	{
		return (1);
	}
}
