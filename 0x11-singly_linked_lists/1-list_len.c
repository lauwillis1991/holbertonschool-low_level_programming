#include "lists.h"
#include <stdio.h>

/**
 * list_len - count elements in linked list
 * @h: pointer to linked list
 * Return: number of element
 */

size_t list_len(const list_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return(i);
}
