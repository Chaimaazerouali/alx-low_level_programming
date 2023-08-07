#include "main.h"
#include <stdlib.h>

void util(char **w, char *);
void create_word(char **, char *, int, int, int);

/**
*strtow - splits a string into words.
*@str: the string
*Return: returns a pointer to an array of strings (words)
*/
char **strtow(char *str)
{
	int a, b, len;
	char **w;

	if (str == NULL || str[0] == '\0' || (str[0] == ' ' && str[1] == '\0'))
		return (NULL);

	a = b = len = 0;
	while (str[a])
	{
		if (b == 0 && str[a] != ' ')
			b = 1;
		if (a > 0 && str[a] == ' ' && str[a - 1] != ' ')
		{
			b = 0;
			len++;
		}
		a++;
	}

	len += b == 1 ? 1 : 0;
	if (len == 0)
		return (NULL);

	w = (char **)malloc(sizeof(char *) * (len + 1));
	if (w == NULL)
		return (NULL);

	util(w, str);
	w[len] = NULL;
	return (w);
}

/**
*util - fetch words into an array
*@w: array
*@str: string
*/
void util(char **w, char *str)
{
	int a, b, x = 0, y = 0;

	while (str[x])
	{
		if (y == 0 && str[x] != ' ')
		{
			a = x;
			y = 1;
		}

		if (x > 0 && str[x] == ' ' && str[x - 1] != ' ')
		{
			create_word(w, str, a, x, b);
			b++;
			y = 0;
		}

		x++;
	}

	if (y == 1)
		create_word(w, str, a, x, b);
}
/**
 *create_word - creating a word from a given string
 *and inserting it into the array of strings
 *@arr: array
 *@str: string
 *@beg: the opning
 *@D: the ending
 *@k:The position in the array where the word should be inserted
 */
void create_word(char **arr, char *str, int beg, int D, int k)
{
	int a, b;

	a = D - beg;
	arr[k] = (char *)malloc(sizeof(char) * (a + 1));

	for (b = 0; beg < D; beg++, b++)
		arr[k][b] = str[beg];
	arr[k][b] = '\0';
}
