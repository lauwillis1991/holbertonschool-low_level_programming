#include "holberton.h"
#include <stdlib.h>

/**
 * clear_bit - sets value of bit to 0 at given index.
 * @n: integer pointer
 * @index: index
 * Return: 1 if works and -1 if error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	int shift = 1 << index;

	if (index > sizeof(long) * 8)
		return (-1);
	*n &= ~shift;
	return (1);
}
