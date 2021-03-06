#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * _printChar - prints char type from valist
 * @valist: va_list to function
 */

void _printChar(va_list valist)
{
	printf("%c", va_arg(valist, int));
}

/**
 * _printInt - prints int type from valist
 * @valist: va_list to function
 */


void _printInt(va_list valist)
{
	printf("%i", va_arg(valist, int));
}

/**
 * _printFloat - prints float type from valist
 * @valist: va_list to function
 */


void _printFloat(va_list valist)
{
	printf("%f", va_arg(valist, double));
}

/**
 * _printStr - prints string type from valist
 * @valist: va_list to function
 */


void _printStr(va_list valist)
{
	char *str;

	str = va_arg(valist, char *);
	if (str == NULL)
		str = "(nil)";
	printf("%s", str);

}


/**
 * print_all - prints all
 * @format: the format to print
 */

void print_all(const char * const format, ...)
{
	int i, j;
	va_list args;
	char *s;

	find storage[] = {
		{"c", _printChar},
		{"i", _printInt},
		{"f", _printFloat},
		{"s", _printStr}
	};

	i = 0;
	s = "";
	va_start(args, format);
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (*storage[j].c == format[i])
			{
				printf("%s", s);
				storage[j].f(args);
					s = ", ";
			}
					j++;
		}
			i++;
	}
		printf("\n");
		va_end(args);

}
