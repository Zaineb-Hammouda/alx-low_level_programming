#include "main.h"

/**
 * *_strcat - concatenates two strings
 * Return: pointer to resulting string
 * @dest: a pointer to the first string
 * @src: second string to be appended to the first
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, length = 0;

	while (dest[i++])
	{
		length++;
	}
	for (i = 0; src[i]; i++)
	{
		dest[length++] = src[i];
	}
	return (dest);
}
