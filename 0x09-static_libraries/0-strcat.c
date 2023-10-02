#include "main.h"
/**
 * _strcat -concatenates two strings
 * @dest: first string
 * @src: secound string
 *
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	for ( ; dest[i] != '\0'; )
	{
		i++;
	}
	j = 0;
	for ( ; src[j] != '\0'; )
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}
