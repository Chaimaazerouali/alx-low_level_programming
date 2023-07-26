#include "main.h"

/**
* reverse_array - prototype
* Description: a function reverse array of integers
* @a: array
* @n: how much elements in the array
*/

void reverse_array(int *a, int n)
{
	int c;
	int b;
	int K;

	b = n - 1;

	for (c = 0; c < n / 2; c++)
	{
		K = a[c];
		a[c] = a[b];
		a[b--] = K;
	}
}
