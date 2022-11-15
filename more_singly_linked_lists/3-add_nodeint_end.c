#include "lists.h"
/**
 *add_nodeint_end - adds a new node at the end of a listint_t list
 *
 *@head: head pointer
 *@n: data
 * Return: if !malloc NULL, else return new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

	new = malloc(sizeof(listint_t));
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

		return (new);
	}
}
