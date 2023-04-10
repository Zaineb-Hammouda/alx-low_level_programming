#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * Return: 1 if successful, -1 if index > 63
 * 63 is the number of bits in unsigned long int
 * @n: number to change
 * @index: index of bit to set
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n |= (1 << index);
		return (1);
}
