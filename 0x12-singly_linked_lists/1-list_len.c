#include "lists.h"
/**
 * list_len - a function that returns the number of elements
 * @h: list.
 * Return: size_t
 */

size_t list_len(const list_t *h)
{
	size_t n;

	n = 0;
	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
