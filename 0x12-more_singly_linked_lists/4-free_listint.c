#include "lists.h"

/**
 * free_listint - free list
 * @head: head of linked list
 */
void free_listint(listint_t *head)
{
	if (head != NULL)
	{
		free_listint(head->next);
		free(head);
	}
}
