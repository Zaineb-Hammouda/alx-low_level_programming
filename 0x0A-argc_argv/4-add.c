#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive number numbers
 * Return: 0 if success, 1 if number contains symbols
 * @argv: array of words written when prog is run (arguments)
 * @argc: number of arguments
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i, j, k;

	if (argc < 2)
	{
		printf("0\n");
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	for (k = 1; k < argc; k++)
	{
		sum += atoi(argv[k]);
	}
	printf("%d\n", sum);
	return (0);
}
