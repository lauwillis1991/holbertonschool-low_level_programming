#include <stdio.h>
#include "holberton.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: unsigned long integer
 * @index: index to recover value
 * Return: value of the bit at index or -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i;

	if (index > sizeof(long) * 8)
		return (-1);

	i = n >> index;

	return (i & 1);
}
