#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - returns the sum of all data (n)
 * of a listint_t linked list
 * @head: pointer to head node
 *
 * Return: sum of all data (n), or 0 if empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		printf("Error: list is empty\n");
	else
	{
		while (head)
		{
			sum = sum + head->n;
			head = head->next;
		}
	}

	return (sum);
}
