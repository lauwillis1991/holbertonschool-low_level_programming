#include "lists.h"

/**
 * listint_len - returns number of elements of linked listin_t list
 * @h: argument in which list passed in
 * Return: number of elements of linked list
 */

size_t listint_len(const listint_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
