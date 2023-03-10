#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments passed to it followed by a newline
 * Return: 0 always success
 * @argv: array of words written when prog is run (arguments)
 * @argc: number of arguments
 */
int main(int argc, char *argv[])
{
	printf("%i", argc - 1);
	putchar('\n');
	return (0);
}
