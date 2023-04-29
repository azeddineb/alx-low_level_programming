#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of 
 * a listint_t linked list
 * @head: pointer to the first node
 * @index: node position to delete
 *
 * Return: 1 if succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *tmp;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);

		return (1);
	}

	while (i < index - 1 && current)
	{
		i++;
		current = current->next;
	}
	if (current == NULL || current->next == NULL)
		return (-1);

	tmp = current->next;
	current->next = current->next->next;
	free(tmp);

	return (1);
}

