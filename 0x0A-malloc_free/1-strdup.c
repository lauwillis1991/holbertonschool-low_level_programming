#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - returns a pointer to newly allocated space in memory.
 * @str: the string to get copied.
 * Return: Null if str = NULL and return the copied string if success.
 */

char *_strdup(char *str)
{
	char *arr;
	int i, j;


	if (str == '\0')
	{
		return (NULL);
	}


	for (i = 0; str[i] != '\0'; i++)
	{
		;
		i++;
	}


	arr = malloc(i * sizeof(*arr));


	for (j = 0; str[j] != '\0'; j++)
	{
		arr[j] = str[j];
	}

	arr[j] = '\0';

	return (arr);
}
