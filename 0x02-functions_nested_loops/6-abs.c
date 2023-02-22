#include "./main.h"

/**
 * _abs - computes absolute value of integer
 * Return: 0
 * @i: i is the number to make absolute (parameter)
 */
int _abs(int i)
{
int abs;

	if (i < 0)
	{
		i = +i;
	}
	abs = i;
	return (abs);
}
