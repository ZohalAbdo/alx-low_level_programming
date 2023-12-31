#include "main.h"
/**
 * flip_bits - function that returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: the first number
 * @m: the second number
 * Return:i
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int XOR;
	int i;

	XOR = n ^ m;
	i = 0;
	while (XOR)
	{
		i++;
		XOR &= (XOR - 1);
	}
	return (i);
}
