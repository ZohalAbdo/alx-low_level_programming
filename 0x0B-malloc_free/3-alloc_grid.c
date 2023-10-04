#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a 2 dimensional array
 * @width: size of width
 * @height: size of height
 *
 * Return: Pointer
 */

int **alloc_grid(int width, int height)
{
	int **p;
	int i, j;

	if (width + height < 2 || width < 1 || height < 1)
		return (NULL);

	p = malloc(height * sizeof(*p));
	if (p == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		p[i] = malloc(width * sizeof(**p));
		if (p[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(p[i]);
			free(p);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			p[i][j] = 0;
	}

	return (p);
}
