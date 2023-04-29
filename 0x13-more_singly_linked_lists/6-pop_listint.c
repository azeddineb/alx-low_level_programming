#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t
 * linked list, and returns the head node's data(n)
 * @head: pointer to the head node
 *
 * Return: head node's data(n), 0 if lis is empty
 */
int pop_listint(listint_t **head)
{
	if (*head == NULL)
		return (0);
	else
	{
		listint_t *tmp = *head;
		int data = tmp->n;
		*head = (*head)->next;
		free(tmp);
		return (data);
	}
}

