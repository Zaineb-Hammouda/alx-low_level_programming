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
unsigned long i = 0, j = 1, seq;
unsigned int sum;
int count = 0;

	do
	{
		seq = i + j;
		i = j;
		j = seq;
		count++;
		if (seq % 2 == 0)
		{
			sum += seq;
		}
	}
	while (seq < 4000000);
	printf("%u", sum);
	printf("\n");
	return (0);
}
