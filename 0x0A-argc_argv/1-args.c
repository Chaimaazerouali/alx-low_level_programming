#include <stdio.h>

/**
*main - Entry point
*Description: that function prints the number of arguments.
*@argc: parameter represent number of arg
*@argv: parameter represent arr of arg
*Return: 0.
 */
int main(int argc, char *argv[])
{
	while (argv[argc])
		argc++;
	printf("%d\n", argc - 1);
	return (0);
}
