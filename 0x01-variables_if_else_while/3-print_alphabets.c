#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	char alpha;
	char higher;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
	putchar(alpha);
	}
	for (higher = 'A'; higher <= 'Z'; higher++)
	{
	putchar(higher);
	}
	putchar('\n');
	return (0);
}
