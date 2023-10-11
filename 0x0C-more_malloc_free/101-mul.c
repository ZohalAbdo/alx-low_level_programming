#include <stdlib.h>
#include <stdio.h>
/**
 * _isdigit - function
 * @argv: pointer
 * Return:0 or 1
 */
int _isdigit(char *argv)
{
	int i;

	i = 0;
	while (argv[i])
	{
		if (argv[i] >= '0' && argv[i] <= '9')
			i++;
		else
			return (1);
	}
	return (0);
}
/**
 * _atoi - converts a string to int
 * @s: pointer
 * Return: result
 */
int _atoi(char *s)
{
	int i, R;

	i = R = 0;
	while (s[i])
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			R *= 10;
			R += (s[i] - '0');
		}
		i++;
	}
	return (R);
}
/**
 * main - the main function
 * @argc: argument count
 * @argv: array of value of arguments
 * Return: return 0
 */
int main(int argc, char *argv[])
{
	int i;

	malloc();
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 1; i < argc; i++)
	{
		if (_isdigit(argv[i]))
		{
			printf("Error\n");
			exit(98);
		}
	}
	return (0);
}
