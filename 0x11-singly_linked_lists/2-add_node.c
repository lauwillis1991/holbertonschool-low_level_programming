#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen - return length of string
 * @s: pointer to string
 * Return: length
 */

int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}

/**
 * add_node - adds a new node to beginning of list_t
 * @head: pointer to linked list
 * @str: pointer to string
 * Return: new elements address
 */

list_t *add_node(list_t **head, const char *str)
{

	list_t *sub = malloc(sizeof(list_t));

	if (sub == NULL)
	{
		return (NULL);
	}
	sub->str = strdup(str);
	sub->len = _strlen(str);
	sub->next = *head;
	*head = sub;
	return (*head);
}
