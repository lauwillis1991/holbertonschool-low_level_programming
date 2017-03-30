#include "holberton.h"

/**
 * set_bit - sets value of a bit to 1 at a given index
 * @n: integer n
 * @index: index to set value
 * Return: 1 on success and -1 on failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = 1;

	if (index > sizeof(long) * 8)
		return (-1);

	while (index > 0)
	{
		index--;
		i *= 2;
	}

	*n += i;

	return (1);
}
