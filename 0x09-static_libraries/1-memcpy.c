#include "main.h"
/**
 * _memcpy - copies memory area.
 *@dest: first address
 *@src: second address
 *@n: third address
 *
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	for ( ; i < n; )
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
