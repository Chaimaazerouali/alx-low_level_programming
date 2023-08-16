#include "function_pointers.h"
#include <stddef.h>

/**
*print_name - Prints a name using a function pointer.
*@name: Pointer to a name (string).
*@f: Pointer to a function that takes a char pointer as a
*parameter and returns nothing.
*Return: Always 0.
*/
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
		f(name);
}
