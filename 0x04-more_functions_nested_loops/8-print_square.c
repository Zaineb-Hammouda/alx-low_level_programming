#include "./main.h"

/**
 * print_square - draws a square
 * Return: void
 * @size: n is the size of the square
 */

void print_square(int size)
{
	int n, m;

	if (size > 0)
	{
		for (n = 0; n < size; n++)
		{
			for (m = 0; m < size; m++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
