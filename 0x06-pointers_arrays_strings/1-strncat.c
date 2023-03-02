#include "main.h"

/**
 * *_strncat - concatenates two strings using at most n bytes from src
 * Return: pointer to resulting string
 * @dest: string to be appended upon
 * @src: second string to be appended to the first
 * @n: number of bytes from src
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, length = 0;

	while (dest[i++])
	{
		length++;
	}
	for (i = 0; src[i] && i < n; i++)
	{
		dest[length++] = src[i];
	}
	return (dest);
}
