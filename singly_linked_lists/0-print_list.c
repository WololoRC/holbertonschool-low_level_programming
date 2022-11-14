#include "lists.h"
/**
 *print_list - print content of any node of a linked list/.
 *
 *@h: struct pointer, node of a linked list.
 *
 * Return: Number of nodes.
 */
size_t print_list(const list_t *h)
{
	int cnt = 0;

	while (h)
	{
		if (!h->str)
		{
			printf("[0] %s\n", "(nil)");
		}
		else
			printf("[%d] %s\n", h->len, h->str);
			h = h->next;
			cnt++;
	}

	return (cnt);
}
