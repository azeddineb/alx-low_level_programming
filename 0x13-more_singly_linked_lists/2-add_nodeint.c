#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning
 * of a listint_t list
 * @head: pointer to the first node in the list
 * @n: data to insert in that new node
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *NewNode = (listint_t *)malloc(sizeof(listint_t));

	if (NewNode == NULL)
		printf("Error: Memory allocation fails\n");
	else
	{
		NewNode->n = n;
		NewNode->next = NULL;

		if (*head == NULL)
			(*head) = NewNode;
		else
		{
			NewNode->next = (*head);
			(*head) = NewNode;
		}
	}

	return (*head);
}

