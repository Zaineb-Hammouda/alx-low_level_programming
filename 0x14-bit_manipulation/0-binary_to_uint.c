#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * rev_string - reverses a string in place
 *
 * @s: string to reverse
 * Return: A pointer to a character
 */
char *rev_string(char *s)
{
	int len;
	int head;
	char tmp;
	char *dest;

	for (len = 0; s[len] != '\0'; len++);

	dest = malloc(sizeof(char) * len + 1);
	if (dest == NULL)
		return (NULL);
	memcpy(dest, s, len);
	for (head = 0; head < len; head++, len--)
	{
		tmp = dest[len - 1];
		dest[len - 1] = dest[head];
		dest[head] = tmp;
	}
	return (dest);
}
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to string of binary
 * Return: the unsigned int
 * or 0 if there is other chars or if b is null
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0, pow = 1;
	size_t i;
	char *buffer;
	char *rev_b;

	if (b == NULL)
		return (0);
	buffer = malloc(sizeof(char) * (strlen(b) + 1));
	if (buffer == NULL)
		return (0);
	strcpy(buffer, b);
	rev_b = rev_string(buffer);
	if (rev_b == NULL)
		return (0);
	for (i = 0; i <= strlen(rev_b); i++)
	{
		/*if (rev_b[i] != 1 && rev_b[i] != 0)
		{
			printf("the fault is here\n");
			return (0);
		}*/
		if (rev_b[i] == 1)
		{
			while (i != 0)
			{
				pow *= 2;
				--i;
			}
			result += pow;
			printf("%u\n", result);
		}
		else if (rev_b[i] == 0)
			continue;
	}
	free(buffer);
	free(rev_b);
	return (result);
}
