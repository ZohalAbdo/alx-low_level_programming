#include "function_pointers.h"
/**
 * array_iterator - function that executes a function given
 * as a parameter on each element of an array.
 * @size: the size of the array
 * @array: the array
 * @action:  pointer to the function you need to use
 *
 *Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && size && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
