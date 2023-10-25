#include "lists.h"
/**
 * get_nodeint_at_index -  returns the nth node of a listint_t linked list.
 * @head: pointer
 * @index:index
 * Return: pointer
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *n = head;
	unsigned int i = 0;

	while (n && i < index)
	{
		n = n->next;
		i++;
	}
	if (n != NULL)
		return (n);
	else
		return (NULL);
}
