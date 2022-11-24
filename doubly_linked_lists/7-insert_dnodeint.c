#include "lists.h"
/**
 *insert_dnodeint_at_index - insert a node inte nth position
 *
 *@h: node ptr
 *@idx: index
 *@n: data
 * Return: @new on success, NULL if it fails.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *crt_node, *new;
	unsigned int cnt = 1;
	unsigned int check = dlistint_len(*h);

	if (idx > check)
		return (NULL);

	crt_node = *h;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	if (idx == 0)
	{
		new->n = n;
		new->next = *h;
		new->prev = NULL;
		*h = new;
		return (new);
	}

	while (cnt <= idx)
	{
		if (cnt == idx)
		{
			new->n = n;
			new->next = crt_node->next;
			new->prev = crt_node;
			crt_node->next = new;
		}

		crt_node = crt_node->next;
		crt_node->prev = new;
		cnt++;
	}

	return (new);
}
/**
 *dlistint_len - see for the lenght of a dlistint_t list.
 *
 *@h: head pointer.
 * Return: lenght (cnt).
 */
size_t dlistint_len(const dlistint_t *h)
{
	int cnt = 0;

	while (h)
	{
		cnt++;
		h = h->next;
	}

	return (cnt);
}
