#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a newline to stdout
 * Return: void
 * @s: the string to print
 */

void print_rev(char *s)
{
	int i, j, length;

	for (i = 0; s[i] != '\0'; i++)
	{
		length = i;
	}
	for (j = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
