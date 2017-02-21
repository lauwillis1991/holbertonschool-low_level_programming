#include "holberton.h"

/**
 * swap_int - swaps the values of two integers in parameter.
 * @a: type integer
 * @b: type integer
 */

void swap_int(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
