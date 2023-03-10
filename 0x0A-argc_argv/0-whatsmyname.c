#include "main.h"
#include <stdio.h>

/**
 * main - prints its name followed by newline
 * Return: 0 always success
 * @argv: array of words written when prog is run (arguments)
 * @argc: number of arguments
 */
int main(__attribute__((unused)) int argc, char **argv)
{
	printf("%s\n", *argv);
	return (0);
}
