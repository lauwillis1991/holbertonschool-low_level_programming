#include "holberton.h"

/**
 * _strspn - search a string for a set of bytes
 * @s: char string array
 * @accept: char array vs bytes
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int k;

	i = 0;
	k = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				c++;
				break;
			}
			j++;
		}

		if (accept[j] == '\0')
			break;
		i++;
	}
	return (k);
}
