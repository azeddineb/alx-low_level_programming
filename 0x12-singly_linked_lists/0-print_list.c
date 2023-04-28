#include "lists.h"

/**
 * print_list - prints all elements of a list_t list
 * @h: pointer to the list_t list to print
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	if (h == NULL)
		printf("Error: list is empty\n");
	else
	{
		size_t count = 0;

		while (h != NULL)
		{
			if (h->str == NULL)
				printf("[0] (nil)\n");
			else
				printf("[%u] %s\n", h->lenght, h->str);
			h = h->next;
			count++;
		}

		return (count);
	}
}

