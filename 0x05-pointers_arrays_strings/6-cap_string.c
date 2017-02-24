#include "holberton.h"


/**
 * cap_string - capitalize all words of a string
 * @str: string
 * Return: `str`
 */

char *cap_string(char *str)
{
	int i, c;
	int counter;
	char capSymbol[] = ",;.!?(){}\n\t\" ";

	for (i = 0, counter = 0; str[i] != '\0'; i++)
	{
		if (str[0] > 96 && str[0] < 123)
			counter = 1;
		for (c = 0; capSymbol[c] != '\0'; c++)
		{
			if (capSymbol[c] == str[i])
				counter = 1;
		}

		if (counter)
		{
			if (str[i] > 96 && str[i] < 123)
			{
				str[i] -= 32;
				counter = 0;
			}
			else if (str[i] > 64 && str[i] < 91)
				counter = 0;
			else if (str[i] > 47 && str[i] < 58)
				counter = 0;
		}
	}
	return (str);
}
