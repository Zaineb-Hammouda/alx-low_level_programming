#include "main.h"

/**
 * _puts - prints a string followed by a newline to stdout
 * Return: void
 * @str: the string to print
 */

void _puts(char *str)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
