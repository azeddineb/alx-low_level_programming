#include "lists.h"

/**
 * print_dlistint - prints all the elements of the doubly-linked list.
 * @h: head adress of the doubly_linked list.
 *
 * Return: the number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
