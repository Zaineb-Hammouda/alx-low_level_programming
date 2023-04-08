#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * base_len - Calculates the length for an octal number
 * @num: The number for which the length is being calculated
 * @base: Base to be calculated by
 * Return: An integer representing the length of a number
 */
unsigned int base_len(unsigned int num, int base);
char *convert_binary(unsigned long int num);
unsigned long int binary_to_int(const char *b);
char *strrev(char *str);
unsigned int base_len(unsigned int num, int base)
{
	unsigned int i;

	for (i = 0; num > 0; i++)
	{
		num = num / base;
	}
	return (i);
}
/**
 * convert_binary - converts number to binary
 * Return: string with binary number inside
 * @num: number to convert
 */
char *convert_binary(unsigned long int num)
{
	int i, len;
	char *str;

	if (num == 0)
	{
		str = "0";
		return (str);
	}
	if (num < 1)
		return (NULL);
	len = base_len(num, 2);
	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);

	for (i = 0; num > 0; i++)
	{
		if (num % 2 == 0)
			str[i] = '0';
		else
			str[i] = '1';
		num = num / 2;
	}
	str[i] = '\0';

	return (str);
}
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to string of binary
 * Return: the unsigned int
 * or 0 if there is other chars or if b is null
 */
unsigned long int binary_to_int(const char *b)
{
	unsigned long int result = 0, pow = 1;
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
/**
 * strrev - reverses a string
 * @str: string to reverse
 * Return: reversed string
 */
char *strrev(char *str)
{
	int i, j = 0;
	char ch;

	if (!str || ! *str)
		return (str);

	i = strlen(str) - 1;
	while (i > j)
	{
		ch = str[i];
		str[i] = str[j];
		str[j] = ch;
		i--;
		j++;
	}
	return (str);
}
/**
 * set_bit - sets value of bit to 1 at index
 * @n: number to convert to binary and change
 * @index: index of bit we want to set
 * Return: 1 if success or -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	char *b;

	b = convert_binary(*n);

	if (index > strlen(b) - 1)
		return (-1);
	b[index] = '1';
	strrev(b);
	*n = binary_to_int(b);
	
	return (1);
}
