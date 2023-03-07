#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * Return: number of bytes in the initial segment of s which
 * consist only of bytes from accept
 * @s: string to search in
 * @accept: substring
 */
unsigned int _strspn(char *s, char *accept)
{
	int n = 0, i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != 32)
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
					n++;
			}
		}
		else
			return (n);
	}
	return (n);
}
