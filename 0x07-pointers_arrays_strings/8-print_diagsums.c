#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - Prototype
 * Description: a function that prints the sum of the two diagonals
 * @size: size of array
 * @a: two d array
*/

void print_diagsums(int *a, int size)
{
	int m = 0, s1 = 0, s2 = 0;

	while (m < size)
	{
		s1 += *(a + m * size + m);
		s2 += *(a + m * size + size - 1 - m);
		m++;
	}
printf("%d, %d\n", s1, s2);
}
