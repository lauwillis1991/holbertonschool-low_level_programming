#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	char alpha;

	for (i = 0; i <= 9; i++)
	{
	putchar(i + '0');
	}
	for (alpha = 'a'; alpha <= 'f'; alpha++)
	{
	putchar(alpha);
	}
	putchar('\n');
	return (0);
}
