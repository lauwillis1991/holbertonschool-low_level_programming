#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: unsigned int type;
 * Return: 98 if malloc fails, pointer will return allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

ptr = malloc(b);

if (ptr == NULL)
{
	exit(98);
}

return (ptr);
}
