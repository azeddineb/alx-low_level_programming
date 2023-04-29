#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to first node
 * @idx: positon where to add new node
 * @n: data
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode = (listint_t *)malloc(sizeof(listint_t));
	listint_t *temp = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (NULL);

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}


	while (i < idx - 1 && temp)
	{
		i++;
		temp = temp->next;
	}

	newNode->next = temp->next;
	temp->next = newNode;

	return (newNode);
}

