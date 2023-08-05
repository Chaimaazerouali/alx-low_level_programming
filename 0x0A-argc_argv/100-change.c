#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: minimum number of coins to make change for an amount of money.
 * @argc: arg to count
 * @argv: array
 * Return: pair 0 or 1
 */

int main(int argc, char *argv[])
{
	int N, x = 0, count = 0;
	int coin[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (atoi(argv[1]) < 0)
		printf("0\n");
	else
	{
		N = atoi(argv[1]);

		while (N > 0)
		{
			while (coin[x] <= N)
			{
				N -= coin[x];
				count++;
			}
			x++;
		}
		printf("%d\n", count);
	}
	return (0);
}
