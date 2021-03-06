#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - allocates memory for an array of nmemb elements
 * @nmemb: unsigned int
 * @size: unsigned int
 * Return: if nmemb/size is 0. return NULL or if malloc fails return NULL.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);
	{
		if (ptr == NULL)

		{
			return (NULL);
		}

		for (i = 0; i < nmemb; i++)
		{
			ptr[i] = 0;
		}
		return (ptr);
	}
}
