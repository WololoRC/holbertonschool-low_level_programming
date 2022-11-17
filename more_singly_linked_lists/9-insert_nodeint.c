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

	new = malloc(sizeof(listint_t));
	new->n = n;
	if (!*head)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	crt_node = *head;
	while (crt_node)
	{
		if (cnt >= idx)
		{
			if (!new)
			{
				return (NULL);
			}

			new->next = crt_node->next;
			crt_node->next = new;

			return (new);
		}

		if (crt_node->next != NULL)
		{
			crt_node = crt_node->next;
			cnt++;
		}
		else
			return (NULL);
	}
	return (NULL);
}
