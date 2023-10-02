#include "main.h"
/**
 * _strncpy - function that copies a string.
 * @dest: first string
 * @src: the secound string will copied
 * @n: input value
 *
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	for ( ; j < n && src[j] != '\0' ; )
	{
		dest[j] = src[j];
		j++;
	}
	for ( ; j < n ; )
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
