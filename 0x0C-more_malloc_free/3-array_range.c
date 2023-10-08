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
	int i;
	int *x;

	i = 0;
	if (min > max)
		return (NULL);
	x = malloc(sizeof(int) * max - min + 1);
	if (x == 0)
		return (NULL);
	for (i = 0; i < max; i++)
	{
		x[i] = min;
		min++;
	}
	return (x);
}
