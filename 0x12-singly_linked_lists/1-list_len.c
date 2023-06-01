#include <stdlib.h>
#include "lists.h"

/**
 *i list_len - Dertmines the lentgh of  a linked list
 * 
 * Return: the lentgh of a linked list
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}

