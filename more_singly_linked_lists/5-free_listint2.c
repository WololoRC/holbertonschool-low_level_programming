#include "lists.h"
/**
 *free_listint2 - free the list listint_t
 *
 *@head: ptr to ptr of head list
 */
void free_listint2(listint_t **head)
{
	if (!*head)
	{
		return;
	}

	while (*head)
	{
		free(*head);
		*head = (*head)->next;
	}

	*head = NULL;
}
