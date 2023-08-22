#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end.
 * @head: address of head node.
 * @n: element to be added.
 *
 * Return: address of the new element, Or NULL.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t)), *node;

	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (!*head)
	{
		newNode->prev = NULL;
		*head = newNode;
	}
	else
	{
		node = *head;
		while (node->next)
			node = node->next;
		node->next = newNode;
		newNode->prev = node;
	}

	return (newNode);
}
