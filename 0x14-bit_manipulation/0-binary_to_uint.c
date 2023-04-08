#include "main.h"
#include <string.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to string of binary
 * Return: the unsigned int
 * or 0 if there is other chars or if b is null
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0, pow = 1;
	int i;

	if (b == NULL)
		return (0);

	for (i = strlen(b) - 1; i >= 0; i--)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		if (b[i] == '1')
		{
			result += pow;
		}
		pow *= 2;
	}
	return (result);
}
