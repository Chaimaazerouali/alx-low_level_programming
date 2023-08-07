#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
*str_concat - function concatenates two strings
*@s1: 1st str
*@s2: 2nd str
*Return:NULL on failure or s1+s2
*/

char *str_concat(char *s1, char *s2)
{
	int a, b, len1, len2;
	char *ptr;

	len1 = len2 = 0;

	if (s1 != NULL)
	{
		while (s1[len1] != '\0')
			len1++;
	}
	if (s2 != NULL)
	{
		while (s2[len2] != '\0')
			len2++;
	}
	ptr = malloc(sizeof(char) * (len1 + len2 + 1));
	if (ptr == 0)
		return (NULL);
	for (a = 0; a < len1; a++)
		ptr[a] = s1[a];
	for (b = 0; b < len2; b++)
		ptr[a + b] = s2[b];
	ptr[a + b] = '\0';
	return (ptr);
}
