#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change for an amount of money.
 * Return: 1 if argc < 2
 * @argv: array of words written when prog is run (arguments)
 * @argc: number of arguments
 */
int main(int argc, char **argv)
{
	int n, i = 0;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]);
	for (i = 0; n > 0; i++)
	{
		if (n - 25 >= 0)
		{
			n -= 25;
		}
		else if (n - 10 >= 0)
		{
			n = n - 10;
		}
		else if (n - 5 >= 0)
		{
			n = n - 5;
		}
		else if (n - 2 >= 0)
		{
			n = n - 2;
		}
		else if (n - 1 >= 0)
		{
			n = n - 1;
		}
	}
	printf("%d\n", i);

	return 0;
}
