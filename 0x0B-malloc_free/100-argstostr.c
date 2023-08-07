#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
*argstostr - function that concatenates all the arguments of your program.
*@ac: the number of arguments passed to the program
*@av: array of pointers to the arguments
*Return: fails=NULL Otherwiseit returns a pointer to the new string
 */
char *argstostr(int ac, char **av)
{
	int i, j;
	char *p;
	int len = 0;
	/*first checks if ac == 0 or av == NULL.*/
	/*If either of these conditions is true, it returns NULL*/
	if (ac == 0 || av == NULL)
		return (NULL);
	/*calculates the total length of the new string by adding up the*/
	 /* lengths of all the arguments and adding one for each new line character*/
	for (i = 0; i < ac; i++)
	{
		len += strlen(av[i]);
		len++;
	}
	/* allocates memory for the new string */
	p = malloc(sizeof(char) * (len + 1));
	if (p == NULL)
		return (NULL);
	/* concatenates all the arguments into one string */
	i = 0;
	len = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			p[len] = av[i][j];
			len++;
			j++;
		}
		p[len] = '\n';
		len++;
		i++;
	}
	p[len] = '\0';

	/* returns a pointer to the new string */
	return (p);
}
