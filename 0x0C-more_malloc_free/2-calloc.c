#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array and sets it to 0
 * Return: void pointer
 * @nmemb: number of elements of the array
 * @size: size of type of elemnts
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i += size)
		arr[i] = 0;
	return (arr);
}
