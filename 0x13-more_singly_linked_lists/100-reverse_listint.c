#include "lists.h"
/**
 * reverse_listint - reverse the linked list
 * @head: pointer
 * Return: pointer
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *n = NULL;
	listint_t *t = NULL;

	while (*head)
	{
		t = (*head)->next;
		(*head)->next = n;
		n = *head;
		*head = t;
	}
	*head = n;
	return (*head);
}
