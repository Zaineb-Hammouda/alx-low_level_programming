#include "main.h"

/**
 * *leet - encodes a string into 1337
 * Return: pointer to resulting string
 * @str: string to be encoded
 */
char *leet(char *str)
{
	int i = 0, j;
	char s[8] = {'0', 'L', '?', 'E', 'A', '?', 'T'};

	while (str[i])
	{
		for (j = 0; j <= 7; j++)
		{
			if (str[i] == s[j] || str[i] - 32 == s[j])
				str[i] = j + '0';
		}
		i++;
	}
	return (str);
}
