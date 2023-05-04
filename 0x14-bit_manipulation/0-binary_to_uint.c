#include "main.h"

/**
 * binary_to_uint - converts a number from binary to unsigned int
 * @b: pointer to binary string
 * Return: the converted unsigned int
 * returns  if b is NULL or if there are other chars besides 0s, 1s
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int expo = 1, result = 0;
	int i;

	if (b == NULL)
		return (0);
	for (i = strlen(b) - 1; i >= 0; i--)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		if (b[i] == '1')
			result += expo;
		expo *= 2;
	}
	return (result);
}
