#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - contain values from min to max
 * @min: int data type
 * @max: int data type
 * Return: pointer to newly created array.
 */

int *array_range(int min, int max)
{
	int *arr, i;

	if (min > max)
	{
		return (NULL);
	}

	arr = malloc((max - min + 1) * sizeof(int));

	if (arr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
	{
		arr[i] = min;
	}

	return (arr);
}
