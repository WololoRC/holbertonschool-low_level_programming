#include "lists.h"
/**
 *print_dlistint - prints all the elements of a dlistint_t list
 *
 *@h: head ptr
 * Return: cnt
 */
size_t print_dlistint(const dlistint_t *h)
{
	unsigned int cnt = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		cnt++;
	}

	return (cnt);
}
