#include "lists.h"
/**
 * free_listint2 - free list
 * @head: double pointer to head
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	for (; head != NULL && *head != NULL;)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
	}
}
