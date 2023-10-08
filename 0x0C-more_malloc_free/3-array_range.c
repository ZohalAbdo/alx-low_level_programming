#include "main.h"
#include "stdio.h"
#include "stdlib.h"
/**
 * array_range - a function that creates an array of integers
 * @min: minimum value
 * @max: maximum value
 *
 *Return: pointer
 */
int *array_range(int min, int max)
{
	int i, j;
	int *x;

	i = 0;
	if (min > max)
		return ('\0');
	x = malloc(max - min + 1);
	if (*x == '\0')
		return ('\0');
	for (j = min; j < (max + 1); j++)
	{
		x[i] = j;
		i++;
	}
	return (x);
}
