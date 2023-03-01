#include "main.h"

/**
 * rev_string - reverses a string
 * Return: void
 * @s: the string to reverse
 */

void rev_string(char *s)
{
	int i, length, j;

	for (i = 0; s[i] != '\0'; ++i)
		;
	length = i - 1;

	for (j = length ; j >= 0; j--)
	{
		if (s[j] == '\0')
		{
			s[j] == ' ';
			continue;
		}
		_putchar(s[j]);
	}
	_putchar('\n');
}
