#include "main.h"
/**
* flip_bits - Counts the number of bits you would need to flip
* to get from one number to another.
* @n: The first number.
* @m: The second number.
* Return: the count
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result;
	int count = 0;

	result = n ^ m;

	while (result)
	{
		count += result & 1;
		result >>= 1;
	}
	return (count);
}
