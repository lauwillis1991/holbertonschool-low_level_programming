#include "holberton.h"

/**
 * print_triangle - prints a triangle
 * @size: the size of the triangle
 *
 * Return: void.
 */

void print_triangle(int size)
{

	int i, j;
	if (size <= 0)
	{
		_putchar('\n');
	}
for (i = 0; i < size; i++)
{
	for (j = 0; j < size; j++)
	{
		if (j + 1 < size - i)
		{
			_putchar(' ');
		}
		else
		{
			_putchar('#');
		}
	}
	if (i != size)
	{
		_putchar('\n');
	}
}

}
