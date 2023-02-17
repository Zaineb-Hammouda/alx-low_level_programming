#include <stdio.h>

/**
 * main - print alphabet in lowercase followed by uppercase and a new line
 * Return: Always 0 (success)
 */
int main(void)
{
char lower;
char upper;

	for (lower = 'a'; lower <= 'z'; lower++)
	{	putchar(lower);
	}
	for (upper = 'A'; upper <= 'Z'; upper++)
	{	putchar(upper);
	}
	putchar('\n');
	return (0);
}
