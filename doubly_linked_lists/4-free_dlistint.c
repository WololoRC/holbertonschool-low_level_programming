#include "lists.h"
/**
 *free_dlistint - frees a dlistint_t list
 *
 *@head: node ptr.
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *crt_node;

	while (head)
	{
		crt_node = head;
		head = head->next;
		free(crt_node);
	}
}
