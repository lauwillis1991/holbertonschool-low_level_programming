#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - print strings
 * @separator: string to be printed between strings
 * @n: number of strings passed to function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list valist;
	char *siu;

	va_start(valist, n);
	for (i = 0; i < n; i++)
	{
		siu = va_arg(valist, char*);
		if (siu == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", siu);
		}
		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
printf("\n");
va_end(valist);
}
