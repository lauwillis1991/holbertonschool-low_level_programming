#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */

int main(void)

{
	int start;

	for (start = 'z'; start >= 'a'; start--)
	{
	putchar(start);
	}
	putchar('\n');
	return (0);
}
