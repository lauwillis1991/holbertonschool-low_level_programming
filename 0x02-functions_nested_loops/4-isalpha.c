#include "holberton.h"

/**
 * _isalpha - Return 1 if letter is lowercase or uppercase.
 * @c: char type letter inputted
 * Return: 1 if lowercase or uppercase and 0 anything else.
 */

int _isalpha(int c)

{
	if (c > 96 && c < 123 || c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
