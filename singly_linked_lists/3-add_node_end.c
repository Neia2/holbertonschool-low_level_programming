#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: Pointer to a pointer to the head of the list.
 * @str: String to be added to the list.
 *
 * Return: Pointer to the newly added node, or NULL if it fails.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int len = 0;

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
	new_node->next = NULL;

	if (*head == NULL)
	{

		*head = new_node;
	}
	else
	{
		struct list_s *current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_node;
	}
	while (str[len] != '\0')
	{
		len++;
	}
	new_node->len = len;

	return (new_node);
}
