#include "holberton.h"

/**
 * print_line - draws a line depending on the number inputted.
 * @n: type of int
 * Description: straight line coming up.
 */

void print_line(int n)

{

	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
