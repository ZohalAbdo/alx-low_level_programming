#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - function that concatenates two strings.
 * @s1: first string
 * @s2: secound string
 *
 * Return: pointer or null
 */
char *str_concat(char *s1, char *s2)
{
	char *con;
	int i, j = 0, len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		len++;

	con = malloc(sizeof(char) * len);
	if (con == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		con[j++] = s1[i];

	for (i = 0; s2[i]; i++)
		con[j++] = s2[i];

	return (con);
}
