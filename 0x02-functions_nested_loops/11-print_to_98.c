#include "./main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * Return: void
 * @n: n is the variable (parameter)
 */
void print_to_98(int n)
{
int i, j;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			_putchar(i);
		}
	}
	else if (n > 98)
	{
		for (j = n; j >= 98; j++)
		{
			_putchar(j);
		}
	}
	else
	{
		_putchar(98);
	}
	while (i != 98 || j != 98)
	{
		_putchar(i + ',' + ' ');
		_putchar(j + ',' + ' ');
	}
}
