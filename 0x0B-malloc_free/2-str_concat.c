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
	int i, j, k;
	char *con = NULL;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)

	for (j = 0; s2[j] != '\0'; j++)

	con = (char *)malloc((i + j) * sizeof(char));

	if (con == NULL)
		return (NULL);

	for (k = 0; s1[k] != '\0'; k++)
		con[k] = s1[k];

	for (k = 0; s2[k] != '\0'; k++)
		con[k + i] = s2[k];

	return (con);
}
