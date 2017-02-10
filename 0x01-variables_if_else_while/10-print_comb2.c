#include <stdio.h>
/**
 * main - main block
 * Description: Print all possible combinations fo single-digit numbers.
 * Numbers must be separated by commas and a space.
 * You can only use `putchar` to print to console
 * You can only use `putchar` up to four times.
 * You are not allowed to use any variable of type `char`.
 * Return: 0
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (i == 9 && j == 9)
			{
			break;
			}
			putchar(',');
			putchar(' ');


		}


	}

	putchar('\n');
	return (0);
}
