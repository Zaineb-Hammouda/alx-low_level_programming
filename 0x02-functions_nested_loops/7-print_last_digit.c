#include "./main.h"

/**
 * print_last_digit - prints the last digit of a number
 * Return: value of last digit
 * @i: i is the number given (parameter)
 */
int print_last_digit(int i)
{
int j = i % 10;

	_putchar(j);
	return (j);
}
