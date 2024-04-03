#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

struct node
{
	int data;
	struct node *link;
};

size_t list_len(const list_t *h)
{
	size_t count = 0;

while (h != NULL)
{
	count++;
	h = h->next;
}
return (count);
}
