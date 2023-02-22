#include "./main.h"

/**
 * jack_bauer - prints every minute of the day from 00:00 to 23:59
 * followed by a new line
 * Return : void
 */
void jack_bauer(void)
{
int j, i;

	for (i = 0; i <= 59; i++)
	{
		while (i <= 9)
		{
			_putchar(':' + '0' + i);
		}
		_putchar(':' + i);
		_putchar('\n');
	}
	for (j = 0; j <= 23; j++)
	{
		while (j <= 9)
		{
			_putchar(j)
		}
		_putchar(j + ':' + i);
	}
}
