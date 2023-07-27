#include "main.h"

/**
* string_toupper - prototype
* Description: a function changes all low letters to upp
* @s: the string to be changed.
* Return: A pointer to the changed string.
*
*/

char *string_toupper(char *s)

{
	iint a = 0;

	while (s[a] != '\0')
	{
	if (s[a] >= 'a' && s[a] <= 'z')
	s[a] -= 32;      
	a++;
	}
return (s);
}
