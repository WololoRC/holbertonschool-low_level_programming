#include "lists.h"
/**
 *dlistint_len - count the number of elements on dlistint_t list
 *
 *@h: ptr to head
 * Return: cnt.
 */
size_t dlistint_len(const dlistint_t *h)
{
	unsigned int cnt = 0;

	while (h)
	{
		cnt++;
		h = h->next;
	}

	return (cnt);
}
