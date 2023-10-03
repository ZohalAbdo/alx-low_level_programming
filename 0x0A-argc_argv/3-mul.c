#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main -  multiplies two numbers.
 * @argc: the sum of arguments
 * @argv: array contain values of arguments
 *
 *Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
int num1, num2, result;

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);
	return (0);
}
