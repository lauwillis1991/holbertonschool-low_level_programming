#include "lists.h"
#include <string.h>

/**
 * free_list - frees list_t
 * @head: beginning of list
 */

void free_list(list_t *head)
{
	list_t *sub;

	for (; 1 ;)
	{
		if (head == NULL)
		{
			break;
		}
		sub = head;
		head = sub->next;
		free(sub->str);
		free(sub);
	}
}
