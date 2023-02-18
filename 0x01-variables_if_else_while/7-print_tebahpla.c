#include <stdio.h>

/**
 * main - entry point
 * rint lowercase alphabet in reverse
 * using putchar and followed by newline
 * Return: Always 0 (success)
 */
int main(void)
{
char lower;
	for (lower = 'z'; lower >= 'a'; lower--)
	{
		putchar(lower);
	}
	putchar('\n');
	return (0);
}
