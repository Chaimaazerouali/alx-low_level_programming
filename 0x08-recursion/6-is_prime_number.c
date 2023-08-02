#include "main.h"

/**
 * is_prime_numberSecond - checher
 * @n: variable to check
 * @a: divisor to check
 * Return: 1, 0
 */

int is_prime_numberSecond(int n, int a)
{
	if (n <= 1)
		return (0);
	if (a == n)
		return (1);
	if (n % a == 0)
		return (0);
	return (is_prime_numberSecond(n, a + 1));
}

/**
 * is_prime_number - checker
 * @n: variable to check
 * Return: 1, 0
 */

int is_prime_number(int n)
{
	return (is_prime_numberSecond(n, 2));
}
