#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: head node pointer
 * @index: index in linkedlist
 * Return: node pointer/NULL if fails
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int count;

	temp = head;
	for (count = 0; count != index && temp != NULL; count++)
	{
		temp = temp->next;
	}
	if (temp == NULL)
	{
		return (NULL);
	}
	return (temp);
}
