#include "holberton.h"

/**
 * rot13 - last problem
 * @s: type string
 *
 * Return: s;
 */

char *rot13(char *s)
{
	int i;
	int j;
	char this[] = "abcdefghijklmABCDEFGHIJKLM";
	char that[] = "nopqrstuvwxyzNOPQRSTUVWXYZ";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; this[j] != '\0'; j++)
		{
			if (s[i] == this[j])
			{
				s[i] = that[j];
			}
			else if (s[i] == that[j])
			{
				s[i] = this[j];
			}
		}
	}

	return (s);
}
