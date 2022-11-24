#include "lists.h"
/**
 *insert_dnodeint_at_index - insert a node inte nth position
 *
 *@h: node ptr
 *@idx: index
 *@n: data
 * Return: @new on success, NULL if it fails.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *crt_node, *new;
	unsigned int check = dlistint_len(*h);

	if (idx > check)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	crt_node = get_dnodeint_at_index(*h, (idx - 1));

	new = malloc(sizeof(dlistint_t));

	new->n = n;
	new->next = crt_node->next;
	crt_node->next = new;
	new->prev = crt_node;

	if ((new->next))
		new->next->prev = new;

	return (new);
}
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


