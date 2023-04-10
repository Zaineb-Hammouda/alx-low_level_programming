#include "main.h"

/**
 * clear_bit - clears a bit at given index
 * @n: number to change
 * @index: index of bit to clear
 * Return: 1 if success, -1 if index > 63
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1 << index;

	if (index > 63)
		return (-1);
	*n &= ~mask;
	return (1);
}
