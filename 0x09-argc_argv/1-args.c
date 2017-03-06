#include "holberton.h"
#include <stdio.h>

/**
 * main - prints out number of argments
 * @argc: counting our arguments.
 * @argv: not used.
 * Return: 0
 */


int main(int argc, char **argv)
{
	(void) argv;

	printf("%d\n", argc - 1);

	return (0);

}
