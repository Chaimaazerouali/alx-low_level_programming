#include <stdlib.h>
#include <stdio.h>
/**
*main - program that multiplies two numbers.
*@argc: parameter represent number of arg
*@argv: parameter represent arr of arg
*Return: 0
*/
int main(int argc, char *argv[])
{

	int f, s;
	int mult;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		f = atoi(argv[1]);
		s = atoi(argv[2]);
		mult = f * s;
	}
	printf("%d\n", mult);
	return (0);
}
