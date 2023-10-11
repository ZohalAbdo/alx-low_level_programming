#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - new dog
 *
 * @name: the dog name
 * @age: the dog age
 * @owner: the dog owner
 *
 * Return: void
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *x;
	int len;
	char *p;

	if (name == 0 || owner == 0)
		return (NULL);
	x = malloc(sizeof(dog_t));
	if (x == NULL)
		return (NULL);

	for (len = 1, p = name; *p; len++)
		p++;
	x->name = malloc(len);
	if (x->name == 0)
	{
		free(x);
		return (NULL);
	}

	for (len = 1, p = owner; *p; len++)
		p++;
	x->owner = malloc(len);
	if (x->owner == 0)
	{
		free(x->name);
		free(x);
		return (NULL);
	}

	for (len = 0; *name != 0; len++, name++)
		x->name[len] = *name;
	x->name[len] = 0;
	for (len = 0; *owner != 0; len++)
		x->owner[len] = *owner++;
	x->owner[len] = 0;
	x->age = age;

	return (x);
}
