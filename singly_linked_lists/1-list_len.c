#include "lists.h"
/**
 *list_len - indicates number of elements of a sigly linked list
 *
 *@h: node pointer
 * Return: Numbers of elements
 */
size_t list_len(const list_t *h)
{
	int cnt = 0;

	while (h)
	{
		cnt++;
		h = h->next;
	}

	return (cnt);
}
