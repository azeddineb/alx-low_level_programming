#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a linked list.
 * @head: address of head node.
 * @index: index of the node, starting from 0.
 *
 * Return: node at index or NULL if not exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (i == index)
			return (head);
		i++;
		head = head->next;
	}

	return (NULL);
}
