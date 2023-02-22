#include "./main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times in lowercase
 * followed by a new line
 * Return : void
 */
void print_alphabet_x10(void)
{
int lower = 'a';
int i = 0;

	while (lower <= 'z')
	{
		while (i <= 10)
			_putchar(lower);
			lower++;
	}
		i++;
		_putchar('\n');
}
