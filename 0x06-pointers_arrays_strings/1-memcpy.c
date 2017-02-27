#include "holberton.h"

/**
 * _memcpy - copies memory area
 * @dest: char array to memory area
 * @src: char array from memory area
 * @n: number of elements
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *copycat;

	yolo = dest;
	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	return (copycat);
}
