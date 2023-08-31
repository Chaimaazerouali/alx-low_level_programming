#include "main.h"

/**
* print_binary - Prints the binary representation of a number.
* 1-If the number is 0, print 0 and return.
* 2-Calculate the number of shifts needed to represent the number in binary.
* 3-Print 1 or 0 depending on the bit at the current shift position.
* @n: The number to be printed in binary.
*/
void print_binary(unsigned long int n)
{
	unsigned long int current_number;
	int num_shifts;

	current_number = n;
	num_shifts = 0;

	while ((current_number >>= 1) > 0)
		num_shifts++;

	while (num_shifts >= 0)
	{
		if ((n >> num_shifts) & 1)
			printf("1");
		else
			printf("0");
		num_shifts--;
	}
}
