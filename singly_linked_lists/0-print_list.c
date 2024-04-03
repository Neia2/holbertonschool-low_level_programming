#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

struct node
{
	int data;
	struct node *link;
};

size_t print_list(const list_t *h)
{
	int count = 0;

const list_t *current = h;

	if (h == NULL)
	{
		printf("[0] (nil)\n");
		return (0);
	}

	while(current != NULL)
	{
		printf("[%d] %s\n", current->len, current->str);
		count++;
		current = current->next;
	}
return (count);
}
