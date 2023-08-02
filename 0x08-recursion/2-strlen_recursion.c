#include "main.h"

/**
* _strlen_recursion - Prototype
* Description: a function that returns the lenght of a string.
* @str : returned string
* Return: lenght
*/

int _strlen_recursion(char *str)
{
	if (*str != '\0')
	{
		return (_strlen_recursion(str + 1) + 1);
	}
	else
	{
		return (0);
	}
}
