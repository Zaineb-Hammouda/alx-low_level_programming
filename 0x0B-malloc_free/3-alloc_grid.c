#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocates space for 2D array
 * and initializes it to 0 with malloc
 * Return: pointer to 2D array of ints
 * or NULL if failed or if width or height is 0
 * @width: number of columns
 * @height: number of rows
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **arr;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	arr = malloc(height * sizeof(int *));
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(width * sizeof(int));
		if (arr[i] == NULL)
		{
			free(arr[i]);
			free(arr);
			return (NULL);
		}
	}
	if (arr == NULL)
	{
		for (i = 0; i < height; i++)
			free(arr[i]);
		free(arr);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
