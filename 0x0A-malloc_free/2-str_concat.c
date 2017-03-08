#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - concat two strings
 * @s1: contents of string1
 * @s2: contents of string2
 * Return: NULL on failure.
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, k, m;
	char *arr;


	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i] != '\0'; i++)
		;


	for (j = 0; s2[j] != '\0'; j++)
		;

	arr = malloc((i * sizeof(s1)) + (j * sizeof(s2)) + 1);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (k = 0, m = 0; k < (i + j) + 1; k++)
	{
		if (k < i)
		arr[k] = s1[k];

		else
		{
			arr[k] = s2[m++];
		}

	}
	return (arr);
}
