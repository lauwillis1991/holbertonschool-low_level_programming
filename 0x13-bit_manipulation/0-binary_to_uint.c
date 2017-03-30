#include "holberton.h"
#include <stdio.h>

/**
 * binary_to_uint - converts a binary number to unsigned int.
 * @b: char b
 * Return: converted number or 0 if b is NULL.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int powerTwo = 1, sum = 0;
	int i;

	if (b == NULL)
	{
		return (0);
	}

	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	i--;
	while (i >= 0)
	{
		if (b[i] == '1')
		{
			sum += powerTwo;
		}
		i--;
		powerTwo *= 2;

	}

	return (sum);
}
