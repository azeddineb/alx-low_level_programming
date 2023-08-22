#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning.
 * @head: address of head node.
 * @n: content of the node to be added.
 *
 * Return: address of the new element
 * or NULL if it fails.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->prev == NULL;

	if (*head == NULL)
	{
		*head = newNode;
		newNode->next = NULL;
	}
	else
	{
		newNode->next = *head;
		(*head)->prev = newNode;
		*head = newNode;
	}

	return (newNode);
}
