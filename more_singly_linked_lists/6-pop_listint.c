#include "lists.h"
int pop_listint(listint_t **head)
{
	listint_t *crt_node;
	int data = 0;

	if (!head)
		return (-1);

	if (*head)
	{
		crt_node = *head;
		data = crt_node->n;
		*head = (*head)->next;

		free(crt_node);
	}

	return (data);
}
