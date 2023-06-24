#include "./main.h"

/**
 * _isalpha - Checks for alphabetic char
 * Return: 1 letter, lowercase or uppercase
 * @c: c is the char to check (parameter)
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
