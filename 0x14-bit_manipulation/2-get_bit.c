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
 * get_bit - returns the value of a bit at a given index
 * @n: number to convert to binary and search in
 * @index: index of bit we want to get
 * Return: value of bit at index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	char *b;

	b = convert_binary(n);
	if (index > strlen(b) - 1)
		return (-1);

	return (b[index] - '0');
}
