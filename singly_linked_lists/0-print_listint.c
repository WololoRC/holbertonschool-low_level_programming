#include "lists.h"
/**
 *print_listint - print all elements of the linked list.
 *
 *@h: head pointer of the linked list.
 * Return: NUM of nodes.
 */
size_t print_listint(const listint_t *h)
{
	int cnt = 0;

	while (h)
	{
		printf("%d\n", h->n);
		cnt++;
		h = h->next;
	}

	return (cnt);
}
