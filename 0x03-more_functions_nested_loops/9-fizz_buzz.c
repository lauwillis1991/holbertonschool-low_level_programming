#include "holberton.h"

/**
 * main - Fizz Buzz FizzBuzz!
 * Description: it is what it is...
 *
 * Return: void.
 */

int main(void)
{
	int i, j;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz ");

		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}
