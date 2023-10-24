#include "lists.h"
/**
 * add_node - a function that adds a new node at the beginning of a list_t list.
 * @head: begging of the lists
 * @str: string needs to be duplicated
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	int i;
	list_t *add_node;

	add_node  = malloc(sizeof(list_t *));

	if (str == NULL)
	{
		add_node->str = NULL;
		add_node->len = 0;
		add_node->next = *head;
	}

	if (add_node == NULL)
		return (NULL);

	add_node->next = *head;
	*head = add_node;

	add_node->str = strdup(str);

	for (i = 0; str[i]; i++)
		;

	add_node->len = i;

	return (add_node);
}
