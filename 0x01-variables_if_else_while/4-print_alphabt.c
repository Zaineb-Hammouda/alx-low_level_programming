#include <stdio.h>

/**
 * *main - print alphabet in lowercase followed by a new line, except e and q
 * Return : always 0 (success)
 *
 */
int main(void)
{
char lower = 'a';

	while (lower <= 'z')
	{
		if (lower != 'e' && lower != 'q')
		{
			putchar(lower);
		}
		lower++;
	}
	putchar('\n');
	return (0);
}
