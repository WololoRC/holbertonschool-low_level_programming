#include "lists.h"
/**
 *free_list - free all nodes of a list.
 *
 *@head: node ptr.
 */
void free_list(list_t *head)
{
	while (head)
	{
		if (head->str)
		{
			free(head->str);
		}

		free(head);

		head = head->next;
	}
}
