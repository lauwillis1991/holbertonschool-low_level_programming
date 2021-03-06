#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all of its parameters.
 * @n: unsigned int type / num of parameters
 * Return: total
 */


int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list valist;
	int total = 0;


	va_start(valist, n);
	for (i = 0; i < n; i++)
	{
	total += va_arg(valist, int);
	}

	va_end(valist);

	return (total);
}
