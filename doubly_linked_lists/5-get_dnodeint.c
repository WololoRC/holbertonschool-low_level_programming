#include "lists.h"
/**
 *get_dnodeint_at_index - get a nth node from a dlistint_t list
 *
 *@head: node ptr
 *@index: nth node position
 * Return: nth node on success, NULL if it fails.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int cnt = 0;

	while (cnt < index)
	{
		head = head->next;
		if (!head)
		{
			return (NULL);
		}
		cnt++;
	}

	return (head);
}
