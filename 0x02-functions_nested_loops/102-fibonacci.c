#include <stdio.h>

/**
 * main - Entry point
 *
 * prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: always 0 (success)
 */
int main(void)
{
unsigned long long int i = 0, j = 1, seq;
int count;

	for (count = 0; count < 50; count++)
	{
		seq = i + j;
		i = j;
		j = seq;
		printf("%llu", seq);
		if (count < 49)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
