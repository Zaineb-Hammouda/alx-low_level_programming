#include "./main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * Return: void
 * @n: n is the variable (parameter)
 */
void print_to_98(int n)
{
int i, j, k = 98;

	if (n < k)
	{
		for (i = n; i <= k; i++)
		{
			_putchar('i');
		}
	}
	else if (n > k)
	{
		for (j = n; j >= k; j++)
		{
			_putchar('j');
		}
	}
	else
	{
		_putchar('k');
	}
	while (i != k || j != k)
	{
		_putchar('i' + ',' + ' ');
		_putchar('j' + ',' + ' ');
	}
}
