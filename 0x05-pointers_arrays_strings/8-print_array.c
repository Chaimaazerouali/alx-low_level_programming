#include "main.h"
#include <stdio.h>

/**
*print_array - prototype
*Description:a function that prints n elements of an array of integers
*followed by a new line.
*@a: arr
*@n: integer
*/

void print_array(int *a, int n)
{
	int o;

	o = 0;
	while (o < n)
	{
		if (o == 0)
		{
			printf("%d", *(a + o));
			o++;
		}
		else
		{
			printf(", %d", a[o]);
			o++;
		}
	}
	printf("\n");
}
