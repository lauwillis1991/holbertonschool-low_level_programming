#include "holberton.h"

/**
 * print_diagonal - draw a diagonal line
 * @n: number of times the '\' char is printed
 * Description: Can only use _putchar to print
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (i = 0 ; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (i == j)
			{
				_putchar('\\');
				break;
			}
			else
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}

}
