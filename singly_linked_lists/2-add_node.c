#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: Pointer to a pointer to the head of the list.
 * @str: String to be added to the list.
 *
 * Return: Pointer to the newly added node, or NULL if it fails.
 */

list_t *add_node(list_t **head, const char *str)
{
	{
	struct list_s *new_node = malloc(sizeof(struct list_s));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = *head;
	*head = new_node;

	return (*head);
	}
}
