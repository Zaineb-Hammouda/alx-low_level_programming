#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * Return: the adress to edited string
 * @str: the string to be changed
 */
void *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
