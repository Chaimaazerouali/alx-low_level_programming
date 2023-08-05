#include <stdio.h>

/**
*main - Entry point
*Description: a function that print the number of arg
*@argc: parameter represent number of arg
*@argv: parameter represent arr of arg
* Return: 0.
*/

int main(int argc, char *argv[])
{
	int k;

	for (k = 0; k < argc; k++)
	{
		printf("%s\n", argv[k]);
	}
	return (0);
}
