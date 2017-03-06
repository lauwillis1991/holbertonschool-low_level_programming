#include "holberton.h"

/**
 * _strcat - appends the str string to dest string.
 * @dest: char string to cat too.
 * @src: char string.
 * Return: pointer resulting in string dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
