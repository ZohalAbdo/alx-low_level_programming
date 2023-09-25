#include "main.h"
/**
 * _strstr -  locates a substring.
 *@haystack: first var
 *@needle: second var
 *
 * Return: character
 */
char *_strstr(char *haystack, char *needle)
{
	int co = 0, a = 0, k, j = 0, l, i = 0;
	char *p;

	while (needle[co] != '\0')
	{
		co++;
	}
	while (haystack[i] != '\0')
	{
		i++;
			}
	if (co == 0)
		return (haystack);
	while (haystack[j] != '\0')
	{
		if (haystack[j] == needle[0])
		{
			p = &haystack[j];
			l = j;
			a = 0;
			for (k = 0; k < co; k++)
			{
				if (haystack[l] == needle[k])
					a++;
				l++;
			}
		}
		if (a == co)
			return (p);
		j++;
	}
	return ('\0');
}
