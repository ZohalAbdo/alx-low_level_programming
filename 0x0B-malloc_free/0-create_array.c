#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* create_array - function that creates an array of chars
* @size: the size of array
* @c: the charcter that contain in array
*
*  Return: char_array
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *char_array;

	if (size == 0)
	{
		return (NULL);
	}

	char_array = malloc((size + 1) * sizeof(char));

	if (char_array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			char_array[i] = c;
		}
		char_array[size] = '\0';
	}

	return (char_array);
}
