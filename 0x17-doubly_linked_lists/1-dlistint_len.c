#include "lists.h"

/**
 * dlistint_len - returns the lenght of the doubly-linked list.
 * @h: adress of head node.
 *
 * Return: number of elements.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
