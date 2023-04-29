#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to the beginning of the list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	if (head == NULL)
		printf("List is empty\n");
	else
	{
		while (head->next)
		{
			tmp = head->next;
			free(head);
			head = tmp;
		}

		free(tmp);
	}
}

