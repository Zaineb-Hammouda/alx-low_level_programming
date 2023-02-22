#include "./main.h"

/**
 * main - Entry point
 *
 * description : executes code
 * Return: Always 0 (success)
 */
void print_alphabet(void);

int main(void)
{
	print_alphabet();
return (0);
}

/**
 * print_alphabet - prints alphabet in lowercase
 * followed by a new line
 * Return : void
 */
void print_alphabet(void)
{
int lower;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		_putchar(lower);
	if (lower == 'z')
		_putchar('\n');
	}
}
