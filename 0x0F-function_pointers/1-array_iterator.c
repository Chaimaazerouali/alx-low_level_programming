#include "function_pointers.h"

/**
*array_iterator - Executes a given function on each element of an array.
*@array: Pointer to an array of integers.
*@size: The size of the array.
*@action: Pointer to a function
*that takes an integer as a parameter and returns nothing.
*Return: Always 0.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (action != NULL && array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
