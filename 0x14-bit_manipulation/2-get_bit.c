#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * Return: 1 or 0 depends on the bit at index
 * @n: number to search in
 * @index: index of bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	return ((n & (1 << index)) != 0);
	/**
	 * 1 << index = shifts 1 to the index position
	 * n & .. = can eaither be > 0 or 0
	 * comparing it to 0 will give us the 1 or 0 return
	 */
}
