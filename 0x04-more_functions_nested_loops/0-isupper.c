#include "./main.h"

/**
 * _isupper - Checks for uppercase char
 * Return: 1 success
 * @c: c is the char to check (parameter)
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
