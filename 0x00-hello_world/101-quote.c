#include <stdio.h>
#include <unistd.h>

/**
 * main - print out in the standard error
 * Return: 1 if success.
 */
int main(void)
{
	static const char art[] = "and that piece of art is useful\"";
	static const char dora[] = "- Dora Korpar, 2015-10-19\n";

	fwrite(art, dora, sizeof(art), siweof(dora) - 1, 1, stdout);
	return (1);
}
