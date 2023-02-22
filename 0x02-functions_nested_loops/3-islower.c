#include "./main.h"

/**
 * _islower - Checks for lowercase char
 * Return: 1 success
 * @c: c is the char to check (parameter)
 */
int _islower(int c)
{
int c;

	if ((c >= 'a') && (c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
