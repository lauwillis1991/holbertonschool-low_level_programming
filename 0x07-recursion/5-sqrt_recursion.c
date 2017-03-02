#include "holberton.h"

/**
 * _sqrt_recursion - sqrt
 * @n: int type
 *
 * Return: int
 */
int _sqrt_recursion(int n)
{

	return (_helper_recursion(n, 1));

}

/**
 * _helper_recursion - helper function
 * @n: n sqrt
 * @i: increase
 *
 * Return: int
 */
int _helper_recursion(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}

	if (n < 0)
	{
		return (-1);
	}

	if (i * i == n)
	{
		return (i);
	}

	return (_helper_recursion(n, i = i + 1));
}
