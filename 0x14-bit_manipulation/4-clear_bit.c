#include "main.h"

/**
 * clear_bit - sets value of bit to 0 at index
 * Return: 1 if it wroked, -1 if error
 * @n: number to change
 * @index: index of bit to clear
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
