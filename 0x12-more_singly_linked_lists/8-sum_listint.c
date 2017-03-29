#include "lists.h"

/**
 * sum_listint - sum of list
 * @head: head pointer
 * Return: sum of all int
 */

int sum_listint(listint_t *head)
{
	int sum;
	listint_t *temp;

	temp = head;
	for (sum = 0, temp = head; temp != NULL; temp = temp->next)
	{
		sum += temp->n;
	}
	return (sum);
}
