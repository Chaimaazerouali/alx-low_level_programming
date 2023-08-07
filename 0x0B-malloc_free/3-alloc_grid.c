#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *alloc_grid - function returns a pointer to a 2 dimensional array of integers
 *@width: var
 *@height: var
 *Return: If width or height is 0 or negative = NULL
 */

int **alloc_grid(int width, int height)
{
	int **ptr;
	int i = 0, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = malloc(sizeof(int *) * height);
	if (ptr == NULL)
		return (NULL);
	while (i < height)
	{
		ptr[i] = malloc(sizeof(int) * width);
		if (ptr[i] == NULL)
		{
			j = 0;
			while (j < i)
			{
				free(ptr[j]);
				j++;
			}
			free(ptr);
			return (NULL);
		}
		j = 0;
		while (j < width)
		{
			ptr[i][j] = 0;
			j++;
		}
		i++;
	}
	return (ptr);
}
