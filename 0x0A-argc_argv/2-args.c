#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments it recieves, one per line
 * Return: 0 always success
 * @argv: array of words written when prog is run (arguments)
 * @argc: number of arguments
 */
int main(int argc, char *argv[])
{
	for (int i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
