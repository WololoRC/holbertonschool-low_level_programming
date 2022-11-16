#include "lists.h"
/**
 *free_listint2 - free the list listint_t
 *
 *@head: ptr to ptr of head list
 */
void free_listint2(listint_t **head)
{
	listint_t *crt_node; /* current node */

	while (*head)
	{
		crt_node = *head;
		*head = (*head)->next;

		free(crt_node);
	}

	*head = NULL;
}
