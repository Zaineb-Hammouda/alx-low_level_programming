#include "main.h"

/**
 * _strchr - locate a char in string
 * Return: pointer to first occurence of char in string or 0 if not found
 * @s: string to search in
 * @c: char to locate in string
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (0);
}

