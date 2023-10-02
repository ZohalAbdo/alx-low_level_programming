#include "main.h"
/**
 * _memset - fills memory with a constant byte.
 *@s: first input
 *@b: second input
 *@n: thirth input
 *
 * Return:  a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	for ( ; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
