#include "holberton.h"

/**
 * print_most_numbers - print the numbers from 0 to 9 excluding 2 and 4.
 * Description: You can only use _putchar twice
 */

void print_most_numbers(void)

{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		else
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');

}
