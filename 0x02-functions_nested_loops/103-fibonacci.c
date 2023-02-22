#include <stdio.h>

/**
 * main - Entry point
 *
 * prints the sum of the even valued Fibonacci numbers under 4 million
 *
 * Return: always 0 (success)
 */
int main(void)
{
unsigned long i = 0, j = 1, seq, sum;
int count;

	while (seq < 40000000)
	{
		seq = i + j;
		i = j;
		j = seq;
		count++;
		if (seq % 2 == 0)
		{
			sum += seq;
			printf("%lu", sum);
		}
	}
	printf("\n");
	return (0);
}
