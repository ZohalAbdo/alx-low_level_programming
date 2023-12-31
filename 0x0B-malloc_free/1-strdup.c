#include "main.h"
#include <stdlib.h>
#include "string.h"

/**
 * _strdup - function that returns a pointer
 * to a newly allocated space in memory
 * @str: string
 *
 * Return: NULL if str = NULL
 * OR returns a pointer to the duplicated string
 */
char *_strdup(char *str)
{
	char *p;
	size_t len;

	if (str == NULL)
	{
		return (NULL);
	}
	len = strlen(str);
	p = malloc(sizeof(char) * (len + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	strcpy(p, str);
	return (p);
}
