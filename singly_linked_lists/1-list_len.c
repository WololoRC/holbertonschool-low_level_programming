#include "lists.h"
/**
 *list_len - indicates number of element inside of a node
 *
 *@h: node pointer
 * Return: Numbers of elements
 */
size_t list_len(const list_t *h)
{
	int cnt = 0;

	if (h)
	{
		if (h->str)
		{
			cnt++;
		}

		if (h->len)
		{
			cnt++;
		}
	}

	return (cnt);
}
