#include "./main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times in lowercase
 * followed by a new line
 * Return : void
 */
void print_alphabet_x10(void)
{
char lower, i;

	for (i = 0; i < 10; i++)
	{
		for (lower = 'a'; lower <= 'z'; lower++)
		{
			_putchar(lower);
		}
		_putchar('\n');
	}
}
