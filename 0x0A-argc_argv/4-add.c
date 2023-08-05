#include  <stdio.h>
#include <stdlib.h>

/**
*main - Enrty point
*Description: a function that adds positive numbers.
*@argc: argument count
*@argv: argument vector
*Return: 0
*/
int main(int argc, char **argv)
{

	int x, y, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y] != '\0'; y++)
		{
			if (!((argv[x][y] >= '0' && argv[x][y] <= '9') || argv[x][y] == '-'))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[x]);
	}
	printf("%d\n", sum);
	return (0);
}
