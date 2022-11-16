#include "lists.h"
/**
 *insert_nodeint_at_index - insert a new node at a given position
 *
 *@head: ptr to head ptr
 *@idx: index
 *@n: data (n)
 * Return: *new on success, NULL on failure.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *crt_node, *new;
	unsigned int cnt = 0;

	if (!*head)
	{
		return (NULL);
	}

	crt_node = *head;

	while (crt_node && cnt <= (idx - 2))
	{
		crt_node = crt_node->next;
		cnt++;
	}

	new = malloc(sizeof(listint_t));
	new->n = n;
	new->next = crt_node->next;
	crt_node->next = new;

	return (new);
}
