#include "holberton.h"

/**
 * _sqrt_recursion - sqrt of number recusively
 * @n: int number
 * Return: natural sqrt of number. if not -1
 */

int _sqrt_recursion(int n)
{
	return (helper(n, 1));
}

/**
 * helper - helper function to solve _sqrt_recursion
 * @c: number to determine sqrt
 * @i: incremental number vs c
 * Return: sqrt if able if not -1
 */

int helper(int c, int i)
{
	int square;

	square = i * i;
	if (square == c)
		return (i);
	else if (square < c)
		return (helper(c, i + 1));
	else
		return (-1);
}
