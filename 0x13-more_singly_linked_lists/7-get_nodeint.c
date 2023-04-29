#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the n node
 * of a listint_t linked list
 * @head: pointer the first node
 * @index: index of the node to return
 *
 * Return: pointer to node to be returned, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i < index && head)
	{
		i++;
		head = head->next;
	}

	return (head);
}

