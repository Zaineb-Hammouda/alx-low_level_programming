#include "main.h"

/**
 * flip_bits - returns the number of bits to flip to get from n to m
 * Return: number of flips
 * @n: first number
 * @m: second number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int f = n ^ m;
	unsigned int i;

	for (i = 0; f != 0; f >>= 1)
	{
		if (f & 1)
			i++;
	}
	return (i);
}
