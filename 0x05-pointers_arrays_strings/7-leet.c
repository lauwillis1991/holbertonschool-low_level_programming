#include "holberton.h"

/**
 * leet - speak too OP
 * @s: type string
 *
 * Return: noobs;
 */

char *leet(char *s)
{
	int i;
	int j;
	char this[] = "aeotlAEOTL";
	char that[] = "4307143071";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; this[j] != '\0'; j++)
		{
			if (s[i] == this[j])
			{
				s[i] = that[j];
			}
		}
	}

	return (s);
}
