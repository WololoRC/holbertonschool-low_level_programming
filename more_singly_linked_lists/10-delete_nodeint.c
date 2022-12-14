#include "lists.h"
/**
 *delete_nodeint_at_index - delete nodes of listint_t linked list
 *
 *@head: ptr to head ptr
 *@index: index of list
 *
 * Return: 1 on success, -1 if fails.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *crt_node = *head;
	listint_t *prv_node; /* prev node */
	unsigned int cnt = 1;
	unsigned int check = listint_len(*head);

	if (index > check)
		return (-1);

	if (!*head)
		return (-1);

	if (index == 0)
	{
		prv_node = crt_node;
		*head =	(crt_node = crt_node->next);

		free(prv_node);

		return (1);
	}

	while (cnt <= index)
	{
		prv_node = crt_node;
		crt_node = crt_node->next;
		cnt++;
	}

	prv_node->next = crt_node->next;
	free(crt_node);

	return (1);
}
/**
 *listint_len - see for the lenght of a list.
 *
 *@h: head pointer.
 * Return: lenght (cnt).
 */
size_t listint_len(const listint_t *h)
{
	int cnt = 0;

	while (h)
	{
		cnt++;
		h = h->next;
	}

	return (cnt);
}
