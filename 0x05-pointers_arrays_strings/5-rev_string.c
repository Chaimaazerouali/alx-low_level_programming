#include "main.h"

/**
 * rev_string - prototype
 * Description: it reverse a string.
 * @s: string parameter.
 * Return: 0
 */

void rev_string(char *s)
{
	int a, l;
	char t;

	a = 0;
	while (s[a] != '\0')
	{
		++a;
	}
	for (l = 0; l < a / 2; l++)
	{
		t = s[l];
		s[l] = s[a - 1 - l];
		s[a - 1 - l] = t;
	}
}
