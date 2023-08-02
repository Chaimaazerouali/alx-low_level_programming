#include "main.h"

/**
 * _str_recursion - calc the length of the string
 * @s: string
 * Return: length of s
 */

int _str_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _str_recursion(s + 1));
	else
		return (0);
}
/**
 * _check_palindrome - checker
 *@s : pointer
 *@a : integer
 *@b : integer
 * Return: intger
 */

int _check_palindrome(char *s, int a, int b)
{

	if (a >= b)
		return (1);
	else if (s[a] == s[b])
		return (_check_palindrome(s, a + 1, b - 1));
	return (0);
}

/**
 * is_palindrome - check the characters recursively for palindrome
 * @s: pointer
 * Return: check_palindrome(s, i, len - 1)
 */

int is_palindrome(char *s)
{
	int i, len;

	i = 0;
	len = _str_recursion(s);

	return (_check_palindrome(s, i, len - 1));
}
