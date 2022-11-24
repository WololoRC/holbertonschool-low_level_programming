#include "lists.h"
/**
 *sum_dlistint - sum the data(n) from each element of dlistint_t list
 *
 *@head: node ptr
 *
 * Return: sum.
 */
int sum_dlistint(dlistint_t *head)
{
	unsigned int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
