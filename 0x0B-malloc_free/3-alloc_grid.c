#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - returns a pointer to 2D array of ints
 * @width: row size
 * @height: column size
 * Return: pointer to the allocated space
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i;
	int j;
	int free_all = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(sizeof(int *) * height);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
		arr[i] = malloc(sizeof(int) * width);

	for (i = 0; i < height; i++)
	{
		if (arr[i] == NULL)
			free_all = 1;
	}

	if (free_all)
	{
		for (i = 0; i < height; i++)
			free(arr[i]);
		free(arr);

		return (NULL);
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			arr[i][j] = 0;

	return (arr);
}
