#include "main.h"

/**
 * _strlen - returns the length of a string
 * Return: the length of a string
 * @s: the string
 */

int _strlen(char *s)
{
	int i;
	int length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length += i;
	}
	return (length);
}
