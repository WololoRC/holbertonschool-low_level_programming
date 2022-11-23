#include "lists.h"
/**
 *add_dnodeint - that adds a new node at the beginning of a dlistint_t list
 *
 *@head: ptr to node ptr
 *@n: data
 *
 * Return: @new on success, NULL if fails.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	new->prev = new;

	*head = new;

	return (new);
}
