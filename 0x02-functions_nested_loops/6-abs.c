#include "holberton.h"
/**
 * _abs - figures the absolute value of the integer
 * @n: int type
 * Return: absolute value of @n
 */

int _abs(int n)

{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
