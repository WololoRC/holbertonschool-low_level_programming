#include "lists.h"
/**
 *delete_dnodeint_at_index - delete a nth node give by index
 *
 *@head: ptr to head ptr
 *@index: an index
 * Return: 1 on success, -1 if fails.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *crt_node, *del;
	unsigned int check = dlistint_len(*head);

	if (!*head)
		return (-1);

	if (index > check)
		return (-1);

	crt_node = *head;

	crt_node = get_dnodeint_at_index(crt_node, index);

	if (!crt_node->prev)
	{
		*head = (*head)->next;
		if (!*head)
		{
			free(crt_node);
			return (1);
		}
		(*head)->prev = NULL;
		free(crt_node);
		return (1);
	}

	del = crt_node;
	crt_node = crt_node->prev;
	crt_node->next = del->next;
	del->next->prev = crt_node;
	free(del);

	return (1);
}
/**
 *get_dnodeint_at_index - get a nth node from a dlistint_t list
 *
 *@head: node ptr
 *@index: nth node position
 * Return: nth node on success, NULL if it fails.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int cnt = 0;

	while (cnt < index)
	{
		head = head->next;
		if (!head)
		{
			return (NULL);
		}
		cnt++;
	}

	return (head);
}
/**
 *dlistint_len - count the number of elements on dlistint_t list
 *
 *@h: ptr to head
 * Return: cnt.
 */
size_t dlistint_len(const dlistint_t *h)
{
	unsigned int cnt = 0;

	while (h)
	{
		cnt++;
		h = h->next;
	}

	return (cnt);
}
