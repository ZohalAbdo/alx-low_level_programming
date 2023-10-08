#include "main.h"
#include "stdio.h"
#include "stdlib.h"
/**
 * _calloc -   a function that allocates memory for an array
 * @nmemb: elements of array
 * @size: size of array
 *Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, s;
	char *x;

	s = nmemb * size;
	if (nmemb == 0 || size == 0)
		return ('\0');
	x = malloc(s);
	if (x == 0)
		return ('\0');
	for (i = 0; i < (s + 1); i++)
		x[i] = 0;
	return ((void *)x);
}
