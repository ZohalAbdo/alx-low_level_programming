#include "lists.h"
/**
 * free_listint - free the list
 * @head: head of linked list
 */
void free_listint(listint_t *head)
{
	listint_t *n = head;

	while (head != NULL)
	{
		n = head->next;
		free(head);
		head = n;
	}
}
