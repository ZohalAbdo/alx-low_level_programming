#include "lists.h"
/**
 * dlistint_len - function that returns the number of element
 *@h: head
 *Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;
	while (h != NULL)
	{
		i++;
	}
	return (i);
}
