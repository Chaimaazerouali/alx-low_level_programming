#include "function_pointers.h"
#include <stdio.h>

/**
*int_index - a function that searches for an integer.
*@array: The array to search.
*@size: The number of elements in the array.
*@cmp:  a pointer to the function to be used to compare values.
*Return: index or -1.
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (size <= 0)
		return (-1);
	if (cmp != NULL && array != NULL)
	{
		for (index = 0; index < size; index++)
		{
			if (cmp(array[index]) != 0)
			{
				return (index);
			}
		}
	}
	return (-1);
}
