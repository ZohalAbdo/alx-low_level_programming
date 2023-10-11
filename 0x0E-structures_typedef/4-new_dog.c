#include "dog.h"


/**
 *_strlen - returns length of string
 *@str: string
 *Return: the length
 */
int _strlen(char *str)
{
	int len = 0;

	while (str)
		len++;

	return (len);
}


/**
 *_strcopy - copy string
 *@dest:first string
 *@src: secound string to copy
 *Return:string
 */
char *_strcopy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] ; i++)
		dest[i] = src[i];

	dest[i] = '\0';
	return (dest);
}

/**
 *new_dog - creates a new dog
 *@name: name of new dog
 *@age: age of new dog
 *@owner: owner of new dog
 *Return: NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogo;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	dogo = malloc(sizeof(dog_t));
	if (dogo == NULL)
		return (NULL);

	dogo->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dogo->name == NULL)
	{
		free(dogo);
		return (NULL);
	}

	dogo->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (dogo->owner == NULL)
	{
		free(dogo->name);
		free(dogo);
		return (NULL);
	}

	dogo->name = _strcopy(dogo->name, name);
	dogo->age = age;
	dogo->owner = _strcopy(dogo->owner, owner);

	return (dogo);
}
