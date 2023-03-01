#include "main.h"

/**
 * puts2 - prints every other char of a string
 * Return: void
 * @str: the string to print
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
	{
		if (i % 2)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
