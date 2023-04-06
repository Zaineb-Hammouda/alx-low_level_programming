#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of ints and fills it with values
 * @min: minimum value in array
 * @max: maximum value in array
 * Return: pointer to newly created array or NULL if it fails
 */
int *array_range(int min, int max)
{
	int i, size;
	int *arr;

	if (min > max)
		return (NULL); 
	size = max - min + 1;
	arr = malloc(size * (sizeof(int)));
	if (arr == NULL)
		return (NULL);
	for (i = 0; min <= max; min++, i++)
	{
		arr[i] = min;
	}
	return (arr);
}
