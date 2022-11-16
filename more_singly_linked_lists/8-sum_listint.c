#include "lists.h"
/**
 *sum_listint - sum of all the data (n) of a listint_t linked list
 *
 *@head: ptr to head.
 *
 * Return: -1 if head is NULL, @sum in succes.
 */
int sum_listint(listint_t *head)
{
	listint_t *crt_node;
	int sum = 0;

	if (!head)
	{
		return (0);
	}

	crt_node = head;

	while (crt_node)
	{
		sum += crt_node->n;
		crt_node = crt_node->next;
	}

	return (sum);
}
