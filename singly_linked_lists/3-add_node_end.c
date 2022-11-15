#include "lists.h"
/**
 *add_node_end - add a nothe to the end os a list
 *
 *@head: node pointer
 *@str: node data
 * Return: head of list if !head, else new node.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int cnt = 0;
	list_t *new = malloc(sizeof(list_t));
	list_t *last;

	if (!new)
		return (NULL);

	while (str[cnt])
	{
		cnt++;
	}

	new->str = strdup(str);
	new->len = cnt;
	new->next = NULL;

	if (!*head)
	{
		*head = new;
		return (new);
	}

	else
	{
		last = *head; /* last points to the content of head */

		while (last->next != NULL)
		{
			last = last->next; /* last point where last->next points */
		}

		last->next = new; /* last next is goona be *new */

		return (new);
	}
}
