#include "main.h"

/**
 * print_binary - prints the binary rep of a number
 * Return: void
 * @n: number to convert
 */
void print_binary(unsigned long int n)
{
	int b;

	if (n >> 1)
		print_binary(n >> 1);
	b = ((n & 1) ? '1' : '0');
	_putchar(b);
}
