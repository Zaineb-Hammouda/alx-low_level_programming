#include "./main.h"

/**
 * _isdigit - Checks for a digit
 * Return: 1 if success
 *
 * @c: c is the char to check (parameter)
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
