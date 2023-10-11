#include "main.h"

/**
 * _realloc - function that reallocates a memory block using malloc and free
 *
 * @ptr: pointer
 * @old_size:the old size
 * @new_size: the new size
 *
 *Return: pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;
	char *copy, *f;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		p = malloc(new_size);

		if (p == NULL)
			return (NULL);

		return (p);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	copy = ptr;
	p = malloc(sizeof(*copy) * new_size);

	if (p == NULL)
	{
		free(ptr);
		return (NULL);
	}

	f = p;

	for (i = 0; i < old_size && i < new_size; i++)
		f[i] = *copy++;

	free(ptr);
	return (p);
}
