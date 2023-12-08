#include "lists.h"
/**
 * print_dlistint - function  that prints all the elements of a dlistint_t list
 * @h: head
 * Return: number of nodes(i)
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
