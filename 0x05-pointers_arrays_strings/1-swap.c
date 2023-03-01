#include "main.h"

/**
 * swap_int - swaps two values of two integers
 * Return: void
 * @a: first integer
 * @b: second integer
 */

void swap_int(int *a, int *b)
{
	int c;
	int *p = &c;

	*p = *a;
	*a = *b;
	*b = *p;
}
