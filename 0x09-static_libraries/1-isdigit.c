#include "main.h"

/**
 * _isdigit - function that check the code.
 * @c:int variable
 * Return: 0.
 */

int _isdigit(int c)
{
	if (c <= '9' && c >= '0')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
