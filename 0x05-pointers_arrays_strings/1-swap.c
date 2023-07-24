#include "main.h"

/**
 * swap_int - Prototype
 * Description: a function that swaps the values of two integers
 * @a: integer
 * @b: integer
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
