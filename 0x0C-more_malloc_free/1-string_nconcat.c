#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - count the string
 * @s: string
 *
 *Return: int
 */
unsigned int _strlen(char *s)
{
	unsigned int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
/**
 * string_nconcat -   function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: number of caracter be concatenates
 *
 *Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *con;

	if (n >= _strlen(s2))
		n = _strlen(s2);
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	con = malloc(sizeof(char) * (_strlen(s1) + n + 1));
	if (con == NULL)
		return (NULL);
	for (i = 0 ; i < (_strlen(s1) + 1) ; i++)
	{
		con[i] = s1[i];
	}
	for (j = 0 ; j <= n ; j++)
	{
		con[i] = s2[j];
		i++;
	}
	con[i] = '\0';
	return (con);

}
