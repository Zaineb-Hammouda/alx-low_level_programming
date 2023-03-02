#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * Return: void
 * @a: the array to reverse
 * @n: number of elements of a
 */
void reverse_array(int *a, int n)
{
	int i, j;

	for (i = n - 1; i >= n / 2; i--)
	{
		j = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = j;
	}
}