#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - removes head node off the list
 * @head: double pointer to head node
 * Return: the number removed
 */

int pop_listint(listint_t **head)
{
	int num;
	listint_t *temp;

	if (*head == NULL)
	{
		return (0);
	}

	temp = *head;
	num = temp->n;
	*head = temp->next;
	free(temp);

	return (num);
}
