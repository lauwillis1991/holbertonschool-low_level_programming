#include "holberton.h"
#include <stdio.h>

/**
 * main - print all arguments it recieves
 * @argc: will do nothing
 * @argv: will count the string in array
 * Return: 0
 */

int main(int argc, char *argv[])
{

	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);

}
