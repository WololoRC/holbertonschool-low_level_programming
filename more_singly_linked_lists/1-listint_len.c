#include "lists.h"
/**
 *listint_len - see for the lenght of a list.
 *
 *@h: head pointer.
 * Return: lenght (cnt).
 */
size_t listint_len(const listint_t *h)
{
	int cnt = 0;

	while (h)
	{
		cnt++;
		h = h->next;
	}

	return (cnt);
}
