#include "main.h"

/**
 * leet - prototype
 *  a function that encodes a string into 1337.
 * @s: string
 * Return:s
 */
char *leet(char *s)
{
	int a = 0, b;
	char *arr1 = "aAeEoOtTlL";
	char *arr2 = "4433007711";

	while (s[a] != '\0')
	{
		b = 0;
		while (b < 10)
		{
			if (s[a] == arr1[b])
			{
				s[a] = arr2[b];
				break;
			}
			b++;
		}
		a++;
	}
	return (s);
}
