#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a list_t list
 * @head: list.
 * @str: string 
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int i;
	list_t *add;
	list_t *now;

	add  = malloc(sizeof(list_t));

	if (str == NULL)
	{
		return (NULL);
	}
	if (add == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
		;
	if (*head == NULL)
	{
		*head = add;
		add->len = i;
		add->str = strdup(str);
		add->next = NULL;
		return (add);
	}
	now = *head;
	while (now->next != NULL)
		now = now->next;

	now->next = add;
	add->len = i;
	add->str = strdup(str);
	add->next = NULL;
	return (add);

}
