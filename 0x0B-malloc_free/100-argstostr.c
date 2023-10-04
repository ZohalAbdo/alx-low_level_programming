#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr - function that concatenates all the arguments of your program.
 * @ac: argc
 * @av: argv
 * Return: Null or pointer
 */

char *argstostr(int ac, char **av)
{
	char *a, *b;
	int i, j, x;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0, x = 0; i < ac; i++)
	{
		for (j = 0; *(*(av + i) + j) != '\0'; j++, x++)
		x++;
	x++;
	}
	
	a = (char *)malloc(x + 1);
	if (a == NULL)
		return (NULL);

	b = a;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			*a = av[i][j];
			a++;
		}
		*a = '\n';
		a++;
	}

	return (b);
}
