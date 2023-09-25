#include "main.h"
/**
 * _strchr -  locates a character in a string.
 *@s: first variable
 *@c: second variable
 *
 * Return: pointer to the first occurrence, or NULL if character not found
 */
char *_strchr(char *s, char c)
{

	if (*s == '\0')
		return (s);
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
	       s++;
	}
	if (c == '\0')
		return (s);
	return ('\0');
}
