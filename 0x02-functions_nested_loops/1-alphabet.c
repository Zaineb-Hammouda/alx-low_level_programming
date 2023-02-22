#include "./main.h"

/**
 * print_alphabet - prints alphabet in lowercase
 *
 * followed by a new line
 * Return : void
 */
void print_alphabet(void)
{
int lower;
	for (lower = 'a'; lower <= 'z'; lower++)
		_putchar(lower);
	if (lower == 'z')
		_putchar('\n');
}
