#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 * return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *NewNode = (list_t *)malloc(sizeof(list_t));

	if (NewNode == NULL)
		printf("Error: need more space\n");
	else
	{
		NewNode->str = strdup(str);
		NewNode->len = strlen(str);
		NewNode->next = NULL;

		if ((*head) == NULL)
			(*head) = NewNode;
		else
		{
			list_t *currentNode = *head;

			while (currentNode->next)
				currentNode = currentNode->next;
			currentNode->next = NewNode;
		}
	}

	return (NewNode);
}

