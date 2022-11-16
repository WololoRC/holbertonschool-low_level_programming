#include "lists.h"
/**
 *pop_listint - deletes the head node of a listint_t linked list
 *
 *@head: ptr to head ptr
 * Return: -1 if it fail, else returnd data of the node.
 */
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
