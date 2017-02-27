#include "holberton.h"

/**
 * _strchr - locate character in a string
 * @s: char array string
 * @c: char to search
 * Return: NULL if char not found or result.
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);
		s++;
	}

	return (s + 1);
}
