#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - duplicates a string
 * Return: a pointer to newly allocated space in memory
 * Null if it fails
 * @str: string to duplicate
 */
char *_strdup(char *str)
{
	char *s;
	int size, i;

	size = strlen(str);
	s = malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
	{
		s[i] = str[i];
	}
	return (s);
}
