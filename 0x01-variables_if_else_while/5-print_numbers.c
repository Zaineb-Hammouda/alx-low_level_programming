#include <stdio.h>

/**
 * main - entry point
 * print all single digit number of base 10 starting from 0
 * Return: Always 0 (sucess)
 */
int main(void)
{
int digit;
	for (digit = 0; digit <= 9; digit++)
	{
		printf("%d", digit);
	}
	printf("\n");
	return (0);
}
