#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the begining
 * of a list_t list
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 * Return: the address of the new element, or Null if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *NewNode = (list_t *)malloc(sizeof(list_t));

	if (NewNode == NULL)
		printf("Error: memory space lack\n");
	else
	{
		NewNode->str = strdup(str);
		NewNode->len = strlen(str);
		NewNode->next = NULL;

		if ((*head) == NULL)
			*head = NewNode;
		else
		{
			NewNode->next = (*head);
			(*head) = NewNode;
		}
	}

	return (NewNode);
}

