#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * Return: 1 or 0. or -1 if index is bigger than 63
 * @n: number to search in
 * @index: index of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return ((n & (1 << index)) != 0);
}
