#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main -  program that adds positive numbers
 * @argc: the sum of arguments
 * @argv: array contain values of arguments
 *
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	char *x;

	while (--argc)
	{
		for (x = argv[argc]; *x; x++)
			if (*x < '0' || *x > '9')
				return (printf("Error\n"));
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
