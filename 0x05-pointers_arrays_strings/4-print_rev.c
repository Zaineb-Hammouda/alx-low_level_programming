#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a newline to stdout
 * Return: void
 * @s: the string to print
 */

void print_rev(char *s)
{
	int i, n;

	s[n] = '\0';

	for (i = n - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
