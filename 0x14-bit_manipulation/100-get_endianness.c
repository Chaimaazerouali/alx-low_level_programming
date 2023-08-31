#include "main.h"
/**
* get_endianness - Checks the endianness.
* Return: Returns: 0 if big endian, 1 if little endian.
*/

int get_endianness(void)
{
	int test;

	test = 1;
	if (*(char *)&test == 1)
		return (1);
	else
		return (0);
}
