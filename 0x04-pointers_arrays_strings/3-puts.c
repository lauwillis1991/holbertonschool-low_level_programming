#include "holberton.h"

/**
 * _puts - prints string to stdout
 * @str: type char
 * Description: can only use _putchar
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
