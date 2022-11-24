#include "lists.h"
/**
 *add_dnodeint_end - add a node at the end od dlistint_t list
 *
 *@head: ptr to node ptr
 *@n: data
 *
 * Return: new node on success, NULL if fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *last;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (!*head)
	{
		*head = new;
		return (new);
	}

	else
	{
		last = *head;

		while (last->next != NULL)
		{
			last = last->next;
		}

		last->next = new;
		new->prev = last;

		return (new);
	}
}
