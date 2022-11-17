#include "lists.h"
/**
 *insert_nodeint_at_index - insert a new node at a given position on mid
 *
 *@head: ptr to head ptr
 *@idx: index
 *@n: data (n)
 * Return: *new on success, NULL on failure.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *crt_node, *new;
	unsigned int cnt = 1;

	crt_node = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	if (idx == 0)
	{
		new->n = n;
		new->next = *head;
		*head = new;
		return (new);
	}

	for (crt_node; crt_node = crt_node->next ; cnt++)
	{
		if (cnt == (idx - 1))
		{
			new->n = n;
			new->next = crt_node->next;
			crt_node->next = new;
		}
	}

	if (idx > cnt)
		return (NULL);

	return (new);
}
