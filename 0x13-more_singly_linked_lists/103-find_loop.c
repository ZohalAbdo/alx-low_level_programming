#include "lists.h"
/**
 * find_listint_loop - find the loop
 * @head: head
 * Return: Addres
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tmp1 = head;
	listint_t *tmp2 = head;

	if (!head)
		return (NULL);
	do {
		if (tmp1->next)
			tmp1 = tmp1->next;
		else
			return (NULL);

		if (tmp2->next->next)
			tmp2 = tmp2->next->next;
		else
			return (NULL);
	} while (tmp2 != tmp1);
	tmp1 = head;
	while (tmp2 != tmp1)
	{
		tmp2 = tmp2->next;
		tmp1 = tmp1->next;
	}
	return (tmp1);
}
