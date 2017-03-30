#include "holberton.h"
#include <stdio.h>

/**
 * print_binary - prints the binary representation of a number.
 * @n: unsigned long int
 */

void print_binary(unsigned long int n)
{
	unsigned long int i;
	int shift;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	i = n;
	shift = 0;
	while ((i >>= 1) > 0)
	{
		shift++;
	}

	while (shift >= 0)
	{
		if ((n >> shift) & 1)
			_putchar('1');
		else
			_putchar('0');
		shift--;
	}
}
