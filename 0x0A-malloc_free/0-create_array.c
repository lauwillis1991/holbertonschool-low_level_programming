#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array- makes an array of chars and initializes it with 'H'.
 * @size: amount of times its going to print the chars.
 * @c: is the character that will be printed.
 * Return: NULL if size is 0 or arr.
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	arr = malloc(size * sizeof(*arr));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
