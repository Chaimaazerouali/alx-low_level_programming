#include "main.h"

/**
 * wildcmp - a function that compare strings
 * @pa: pointer1
 * @pb: pointer2
 * Return: 1 or 0
 */

int wildcmp(char *pa, char *pb)
{
	if (*pa == '\0' && *pb == '\0')
		return (1);
	if (*pb == '*')
	{
		return (wildcmp(pa, pb + 1) || (*pa != '\0' && wildcmp(pa + 1, pb)));
	}
	if (*pa == *pb || *pb == '*')
	{
		return (wildcmp(pa + 1, pb + 1));
	}
	return (0);
}
