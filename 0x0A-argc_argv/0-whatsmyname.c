#include <stdio.h>
#include "main.h"
/**
 * main - prints its name, followed by a new line
 * @argc: number of argument integer
 * @argv: array that content the values of arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s", argv[0]);
	return (0);
}
