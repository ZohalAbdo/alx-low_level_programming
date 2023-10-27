#include "main.h"
/**
 * get_endianness - function that checks the endianness.
 * Return: 0 or 1
 */
int get_endianness(void)
{
	int n;

	n = 1;
	if (*(char *)&n == 1)
		return (1);
	else
		return (0);
}
