#include "./main.h"

/**
 * main - Entry point
 * description : prints _putchar followed by new line
 * return: always 0 (success)
 */
int main(void)
{
char put[8] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
int i = 0;

	for (int i = 0; i < 8; i++)
	{
		_putchar(put[i]);
		if (put[i] == 'r')
		{
			_putchar('\n');
		}
	}
return (0);
}
