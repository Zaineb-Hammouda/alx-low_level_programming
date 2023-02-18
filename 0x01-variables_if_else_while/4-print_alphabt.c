#include <stdio.h>

/**
 * main - entry point
 * print alphabet in lowercase followed by a new line, except e and q
 * Return: Always 0 (success)
 */
int main(void)
{
	char lower = 'a';

	while (lower <= 'z')
	{
		if (lower != 'e' && lower != 'q')
		{
			putchar(lower);
		}
		lower++;
	}
	putchar('\n');
	return (0);
}
