#include "lists.h"
/**
 *get_nodeint_at_index - search for a node in listint_t linked list
 *
 *@head: head ptr
 *@index: node to return
 *
 * Return: if !head returns NULL, esle returns the ptr index node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *crt_node;
	unsigned int cnt;

	cnt = 1;

	if (!head)
	{
		return (NULL);
	}

	crt_node = head;

	while (head && cnt <= index)
	{
		if (crt_node->next == NULL)
			return (NULL);
		
		else
		{
			crt_node = crt_node->next;
			cnt++;
		}
	}

	return (crt_node);
}
