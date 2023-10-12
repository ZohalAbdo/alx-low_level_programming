#include "function_pointers.h"
/**
 * int_index - function that searches for an integer.
 *@array: the array
 *@size: is the number of elements in the array
 *@cmp: pointer to the function to be used to compare values
 *
 * Return:the index of the first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, X;

	if (size <= 0)
		return (-1);
	if (array && size && cmp)
	{
		for (i = 0; i < size; i++)
		{
			X = cmp(array[i]);
			if (X != 0)
				return (i);
		}
	}
	return (-1);
}
