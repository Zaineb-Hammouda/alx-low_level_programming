#include <stdio.h>

/**
 * main - prints the alphabet in lower case followed by a new line
 * Return: Always 0 (success)
 */
int main(void)
{
char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
