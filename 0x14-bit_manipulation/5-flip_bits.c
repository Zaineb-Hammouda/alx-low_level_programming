#include "main.h"

/**
 * flip_bits - returns number of bits to flip to get from n to m
 * @n: number to flip
 * @m: result or flipped number
 * Return: number of flips
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	unsigned int flips;

	for (flips = 0; diff != 0; diff >>= 1)
	{
		if (diff & 1)
			flips++;
	}
	return (flips);
}
