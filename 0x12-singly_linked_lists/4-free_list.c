#include "lists.h"
/**
 * free_list - a function that frees a list_t list.
 *@head: pointer
 * Return: Void
 */

void free_list(list_t *head)
{
	list_t *n;

	for (n = head; n != NULL; n = n->next)
	{
		free(n->str);
		free(n);
	}
}
