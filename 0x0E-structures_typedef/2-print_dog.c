#include "dog.h"

/**
 * print_dog - a function that prints a struct dog
 *@d: dog struct
 *
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = "(nil)";
	else
		printf("Name: %s\n", d->name);

	if (d->age < 0)
		d->age = "(nil)";
	else
		printf("Age: %f\n", d->age);

	if ((*d).owner == NULL)
		d->owner = "(nil)";
	else
		printf("Owner: %s\n", d->owner);

}
