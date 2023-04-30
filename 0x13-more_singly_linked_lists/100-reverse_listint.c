#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t linked list.
 * @head: double pointer to the first node
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *suivant = NULL;

	while (*head != NULL)
	{
		suivant = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = suivant;
	}

	*head = prev;

	return (*head);
}

