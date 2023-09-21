#include "main.h"
/**
 * _strncat - concatenates two strings.
 * @dest: first string
 * @src: secound string
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	for ( ; dest[i] != '\0' ; )
	{
		i++;
	}
	j = 0;
	for ( ; j < n && src[j] != '\0' ; )
	{
	dest[i] = src[j];
	i++;
	j++;
	}
	dest[i] = '\0';
	return (dest);
}
