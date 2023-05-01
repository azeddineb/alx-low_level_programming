#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - function that frees a listint_t list.
 * @h: pointer to the first node in list
 *
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *current, *temp;

	if (h == NULL || *h == NULL)
		return (0);

	current = *h;
	*h = NULL;
	while (current != NULL)
	{
		size++;
		temp = current;
		current = current->next;
		free(temp);
		if (temp <= current)
			break;
	}

	return (size);
}

