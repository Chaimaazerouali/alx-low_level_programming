#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry point of the program.
* @argc: The number of command-line arguments.
* @argv: An array of pointers to command-line arguments.
* Return: Always 0.
*/
int main(int argc, char **argv)
{
	int num;
	int (*main_ptr)() = &main;
	int index;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num = atoi(argv[1]);

	if (num < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (index = 0; index < num; index++)
	{
		printf("%.2x", *((unsigned char *)main_ptr + index));
		if (index + 1 < num)
			printf(" ");
	}
	printf("\n");
	return (0);
}
