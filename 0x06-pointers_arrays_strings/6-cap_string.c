#include "main.h"

/**
 * cap_string -  capitalizes all words of a string
 * @str: The string
 *
 * Return: A pointer
 */
char *cap_string(char *str)
{
	int index = 0;

	for ( ; str[index] ; )
	{
		for ( ; !(str[index] >= 'a' && str[index] <= 'z') ; )
			index++;

		if (str[index - 1] == ' ' ||
		    str[index - 1] == '\t' ||
		    str[index - 1] == '\n' ||
		    str[index - 1] == ',' ||
		    str[index - 1] == ';' ||
		    str[index - 1] == '.' ||
		    str[index - 1] == '!' ||
		    str[index - 1] == '?' ||
		    str[index - 1] == '"' ||
		    str[index - 1] == '(' ||
		    str[index - 1] == ')' ||
		    str[index - 1] == '{' ||
		    str[index - 1] == '}' ||
		    index == 0)
			str[index] -= 32;

		index++;
	}

	return (str);
}
