#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: prints string between numbers
 * @n: number of integers passed to function
 * Return: numbers
 */


void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list valist;

	va_start(valist, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(valist, int));
		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(valist);

}
