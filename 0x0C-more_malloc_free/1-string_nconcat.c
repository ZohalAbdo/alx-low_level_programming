#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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

	if (n >= strlen(s2))
		n = strlen(s2);
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	con = malloc(sizeof(char) * (strlen (s1) + n +1) );
	if (con == NULL)
		return (NULL);
	for (i = 0 ; i < (strlen(s1) + 1) ; i++)
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
