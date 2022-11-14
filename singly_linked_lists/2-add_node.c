#include "lists.h"
/**
 *add_node - add nodes to a signly linked list.
 *
 *@head: memory address passed by main.
 *@str: string.
 *
 * Return: New memory address, if malloc fails returns NULL.
 */
list_t *add_node(list_t **head, const char *str)
{
	int cnt = 0;
	list_t *new;

	while (str[cnt])
	{
		cnt++;
	}

	new = malloc(sizeof(list_t));
	if (!new)
	{
		return (NULL);
	}

	new->str = strdup(str);
	new->len = cnt;
	new->next = *head;

	*head = new;

	return (new);
}
