#include "main.h"
/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: number
 * @index: index
 * Return:int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i;
	int x;

	if (index > 64)
		return (-1);

	i = n >> index;

	x = i & 1;
	return (x);
}
