#include "lists.h"

/**
 * sum_dlistint - retuns the sum of all the data.
 * @head: address of head node.
 *
 * Return: the sum, or 0 if the list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
