#include "main.h"

/**
* binary_to_uint - Converts a binary number to an unsigned int.
* @b: Pointer to the binary string to convert.
* Return: the converted number, or 0 if:
* there is one or more chars in the string b that is not 0 or 1.
* b is NULL.
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int converted_value = 0;
size_t index;

if (!b)
	return (0);

for (index = 0; b[index] != '\0'; index++)
{
	if (b[index] == '0' || b[index] == '1')
		converted_value = (converted_value << 1) | (b[index] == '1');
	else
		return (0);
}
return (converted_value);
}
