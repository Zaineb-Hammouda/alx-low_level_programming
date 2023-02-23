#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * Return: void
 * @n: n is the variable (parameter)
 */
void print_to_98(int n)
{
int i, j, m = 98;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
		}
	}
	else if (n > 98)
	{
		for (j = n; j >= 98; j--)
		{
			printf("%d", j);
		}
	}
	else
	{
		printf("%d", m);
	}
	while (i != 98 || j != 98)
	{
		printf("%d, ", i);
		printf("%d, ", j);
	}
	printf("\n");
}
