#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end
 * of a listint_t list
 * @head: double pointer to the beginning of the list
 * @n: the value
 *
 * Return: the address of the new element, or NULL if it fail
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *NewNode = (listint_t *)malloc(sizeof(listint_t));

	if (NewNode == NULL)
		printf("Error: Allocation memory fail\n");

	else
	{
		NewNode->n = n;
		NewNode->next = NULL;

		if (*head == NULL)
			*head = NewNode;
		else
		{
			listint_t *currentNode = *head;

			while (currentNode->next)
				currentNode = currentNode->next;

			currentNode->next = NewNode;
		}
	}

	return (NewNode);
}

