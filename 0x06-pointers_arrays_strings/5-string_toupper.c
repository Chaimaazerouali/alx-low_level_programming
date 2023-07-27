#include "main.h"

/**
* string_toupper - prototype
* Description: a function changes all low letters to upp
* @str: the string to be changed.
* Return: A pointer to the changed string.
*
*/

char *string_toupper(char *str)

{
	int a = 0;

	while (str[a])
	{
	if (str[a] >= 'a' && str[a] <= 'z')
	str[a] -= 32;      
	a++;
	}
        return (str);
}
