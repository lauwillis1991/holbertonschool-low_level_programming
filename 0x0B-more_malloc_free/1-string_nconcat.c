#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - returns the length of the string
 * @s: char type pointer.
 * Return: length of string
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;

	return (i);
}


/**
 * catTime - this is where we concatenate the 2 parameters
 * @s1: char type of s1.
 * @s2: char type of s2.
 * Return: concatenated string.
 */

char *catTime(char *s1, char *s2, int n)
{
	char *result;
	int i, j, str1;

	str1 = _strlen(s1);

	if (n > _strlen(s2))
		n = _strlen(s2);

	result = malloc(str1 + n + 1);
	if (result == NULL)
		return (NULL);

	for (i = 0, j = 0 ; s1[i] != '\0' ; i++, j++)
		result[j] = s1[i];
	for (i = 0 ; i < n ; i++, j++)
		result[j] = s2[i];
	result[j] = '\0';
	return (result);
}

/**
 * string_nconcat - point to a newly allocated space in memory
 * @s1: char type to be concatenated
 * @s2: char type to be concatenated
 * @n: int type to check against s2.
 * Return: NULL if terminated.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	result = catTime(s1, s2, n);
	return (result);
}
