#include "main.h"

/**
* _strspn - Prototype
* Description : a function gets the length of a prefix substring
* @s: string
* @accept: string contain charchters to match in s
* Return: c
*/

unsigned int _strspn(char *s, char *accept)
{
	int a, b, c = 0;

	a = 0;
	while (s[a] != '\0')
	{
		a++;
		b = 0;
		while (accept[b] != '\0')
		{
			if (s[a] == accept[b])
			{
				c++;
				break;
			}
			b++;
		}
		if (accept[b] == '\0')
			break;
	}
	return (c);
}
