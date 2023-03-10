#include "main.h"
#include <stdio.h>

/**
 * main - adds positive number numbers
 * Return: 0 if success, 1 if number contains symbols
 * @argv: array of words written when prog is run (arguments)
 * @argc: number of arguments
 */
int main(int argc, char *argv[])
{
	int sum = 0;

	if (argc < 2)
	{
		printf("0\n");
	}
	for (int i = 1; i < argc; i++)
	{
		if (!(argv[i] >= '0'))
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += argv[i];
		}
	}
	return (0);
}
