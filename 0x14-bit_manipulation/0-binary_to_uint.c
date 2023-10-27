#include "main.h"
/**
 *binary_to_uint - function that converts a binary number to an unsigned int
 *@b: the binary number
 *
 *Return: x
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int x = 0;
	int num = 0;
	unsigned int j = 0;

	if (!b)
		return (0);

	for (j = 0; b[j]; j++)
	{
		if (b[j] != '0' && b[j] != '1')
			return (0);
		num = b[j] - '0';
		x = x * 2 + num;
	}
	return (x);
}

