#include "lists.h"
/**
 *add_node - add nodes to a signly linked list.
 *
 *@head: memory address passed by main.
 *@str: string.
 *
 * Return: New memory address.
 */
list_t *add_node(list_t **head, const char *str)
{
	int cnt = 0;

	while (str[cnt])
	{
		cnt++;
	}

	list_t *new;

	new = malloc(sizeof(list_t));

	new->str = strdup(str);
	new->len = cnt;
	new->next = *head;

	*head = new;

	return (new);
}
