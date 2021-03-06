#include "lists.h"

/**
 * add_nodeint - adds new node at the beginning of a listint_t list
 * @head: head node
 * @n: int value that will be added to node
 * Return: listint_t
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp;

	new = malloc(sizeof(listint_t));
	temp = *head;
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	*head = new;

	if (temp == NULL)
		new->next = NULL;
	else
		new->next = temp;

	return (new);

}
