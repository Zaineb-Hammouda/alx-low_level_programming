#include "./main.h"

/**
 * print_line - draws straight line
 * Return: void
 * @n: n is the number of _
 */

void print_line(int n)
{
	if (n > 0)
	{
		while (n--)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
