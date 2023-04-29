#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - returns the number of elements in a
 * linked listint_t list
 * @h: linked list of type listint_t
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t N = 0;

	if (h == NULL)
		printf("Error: the list is empty\n");
	else
	{
		while (h)
		{
			N++;
			h = h->next;
		}
	}

	return (N);
}

