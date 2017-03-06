#include "holberton.h"

/**
 * _isupper - checks if letter is upper or lowercase.
 * @c: type int character
 * Return: 0 if lower and 1 if upper.
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
