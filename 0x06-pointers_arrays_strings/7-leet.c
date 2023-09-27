#include "main.h"
/**
 * *leet - function that encodes a string into  1337s.
 * @s: input value
 *
 * Return: char
 */
char *leet(char *s)
{
	char a[] = "aeotlAEOTL";
	char n[] = "4307143071";
	int i = 0;
	int j;

	while (*(s + i) != '\0')
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (*(s + i) == a[j])
			{
				*(s + i) = n[j];
				break;
			}
		}
		i++;
	}
	return (s);
}
