#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: double pointer to head
 * @idx: insert node to idx
 * @n: number of new node/NULL if fail
 * Return: new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current;
	listint_t *new;
	unsigned int count;

	new = malloc(sizeof(listint_t));

	if (head == NULL)
	{
		return (NULL);
	}

	new->n = n;

	if (new == NULL && idx != 0)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (&*new);
	}
	for (count = 0, current = *head; current; count++)
	{
		if ((count + 1) == idx)
		{
			new->next = current->next;
			current->next = new;
			return (&*new);
		}
		current = current->next;
	}
	free(new);
	return (NULL);
}
