#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * Return: length of string
 * @s: pointer to string to measure
 */
int _strlen_recursion(char *s)
{
	int i = 0, len;

	if (s[i] = '\0')
	{
		return (1);
	}
	if (s[i] <= '\0')
	{
		i++;
		len = _strlen_recursion(s + i);
	}
	return (len);
}
