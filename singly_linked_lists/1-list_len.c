#include "lists.h"
/**
 * list_len - list length
 * @h: constant pointer
 * Return: S lenght
 */
size_t list_len(const list_t *h)
{
	int n;

	n = 0;
	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}