#include "lists.h"
/**
 *free_listint2 - free the list listint_t
 *
 *@head: ptr to ptr of head list
 */
void free_listint2(listint_t **head)
{
	listint_t *crt_node, *crt_node2;

	crt_node = *head;

	while (!head)
	{
		crt_node2 = crt_node;
		crt_node = crt_node->next;

		free(crt_node2);
	}

	*head = NULL;
}
