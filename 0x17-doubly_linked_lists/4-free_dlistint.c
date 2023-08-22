#include "lists.h"

/**
 * free_dlistint - frees a dlistint list.
 * @head: address of head node.
 *
 * Return: void.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head)
	{
		current = head;
		head = head->next;
		free(node);
	}
}
