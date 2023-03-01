#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a newline to stdout
 * Return: void
 * @s: the string to print
 */

void print_rev(char *s)
{
	int i, length, j;

	for (i = 0; s[i] != '\0'; ++i)
		;
	length = i - 1;
	for (j = length ; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
