#include "main.h"

/**
 * _pow_recursion - returns the value of x power y
 * @x: the number
 * @y: the power
 * Return: x power y, -1 if y is < 0, 1 if y = 0
 */
int _pow_recursion(int x, int y)
{
	int i = 1, power;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}

	while (i <= y)
	{
		power = x * _pow_recursion(x, --y);
		return (power);
	}
	return (0);
}
