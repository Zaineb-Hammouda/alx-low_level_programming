#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a newline to stdout
 * Return: void
 * @s: the string to print
 */

int _strlen(char *s);

void print_rev(char *s)
{
	int i, length;

	length = _strlen(s)

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
/**
 * _strlen - returns the length of a string
 * Return: length of string
 * @s: string to measure
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; ++i)
	;
	return (i);
}
