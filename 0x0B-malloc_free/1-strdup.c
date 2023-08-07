#include <stdlib.h>
#include "main.h"

/**
*_strdup - function returns a pointer to a newly allocated space in memory
*@str: str
*Return: 0 if str = 0
*/
char *_strdup(char *str)
{
	char *ptr;
	int len = 0;

	if (str == 0)
		return (NULL);
	while (str[len] != '\0')
	{
		len++;
	}
	ptr = malloc((sizeof(char) * len) + 1);
	if (ptr == 0)
		return (NULL);
	for (len = 0; str[len]; len++)
	{
		ptr[len] = str[len];
	}
	return (ptr);
}
