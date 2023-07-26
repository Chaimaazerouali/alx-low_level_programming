#include "main.h"

/**
 * cap_string - prototype
 * capitalizes all words of a string
 * @s: input string.
 * Return: the pointer to dest.
 */

char *cap_string(char *s)
{
	int b, a;
	int arr_w[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?',
	'"', '(', ')', '{', '}'};

	b = 0;
	if (*(s + b) >= 'a' && *(s + b) <= 'z')
	{
		*(s + b) = *(s + b) - 32;
	}
	b++;
	while (*(s + b) != '\0')
	{
		for (a = 0; a < 13; a++)
		{
			if (*(s + b) == arr_w[a])
			{
				if ((*(s + (b + 1)) >= 'a') && (*(s + (b + 1)) <= 'z'))
				{
					*(s + (b + 1)) = *(s + (b + 1)) - 32;
					break;
				}
			}
		}
		b++;
	}
	return (s);
}
