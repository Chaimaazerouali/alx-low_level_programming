#include "main.h"

/**
 * rot13 - prototype
 * @s: string
 * Return: s
 */

char *rot13(char *s)
{
	int a = 0, b;

	char arr1[52] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char arr2[52] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (s[a] != '\0')
	{
		b = 0;
		while (arr1[b] != '\0')
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
