#include "lists.h"
/**
 *free_listint - free the list listint_t
 *
 *@head: head of the list ptr
 */
void free_listint(listint_t *head)
{
	listint_t *current_node;

	while (head)
	{
		current_node = head;
		head = head->next;

		free(current_node);
	}
}
