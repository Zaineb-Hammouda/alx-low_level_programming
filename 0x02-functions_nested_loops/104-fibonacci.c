#include <stdio.h>

/**
 * main - Entry point
 *
 * prints the first 98 Fibonacci numbers, starting with 1 and 2
 *
 * Return: always 0 (success)
 */
int main(void)
{
unsigned long i = 0, j = 1, seq;
int count;

	for (count = 0; count < 98; count++)
	{
		seq = i + j;
		i = j;
		j = seq;
		printf("%lu", seq);
		if (count < 97)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
