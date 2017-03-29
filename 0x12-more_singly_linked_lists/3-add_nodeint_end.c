#include "lists.h"

/**
 * add_nodeint_end - adds new node at end of list
 * @head: double pointer pointing to head node
 * @n: new node int value
 * Return: address of the new element/NULL if fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *newNode;

	for (temp = *head; temp && temp->next != NULL;)
	{
		temp = temp->next;
	}

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
	return (NULL);
	}
	newNode->n = n;
	newNode->next = NULL;

	if (temp)
	{
	temp->next = newNode;
	}
	else
	{
		*head = newNode;
	}

	return (newNode);
}
