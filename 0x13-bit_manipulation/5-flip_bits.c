#include "holberton.h"
#include <stdio.h>

/**
 * flip_bits - return number of bits to flip to get from one number to another
 * @n: first integer
 * @m: second integer
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i;
	long int flip;

	for (flip = 0, i = n ^ m; i; flip++)
	{
		i &= (i - 1);
	}

	return (flip);
}
