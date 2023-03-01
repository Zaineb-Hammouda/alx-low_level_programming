#include "main.h"

/**
 * _atoi - converts string to int
 * Return: 0
 * @s: the string to conver
 */

int _atoi(char *s)
{
	int i, length, j;

	for (i = 0; s[i] != '\0'; ++i)
		;
	length = i - 1;

	for (j = 0 ; j < length; j++)
	{
		if (s[i] == '-' || s[i] == '+')
		{
			if (s[i + 1] >= '0' && s[i + 1] <= '9')
			{
				_putchar(s[i]);
			}
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			_putchar(s[i]);
		}
	}
	return (0);
}
