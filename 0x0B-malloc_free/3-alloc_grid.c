#include "main.h"

/**
 * alloc_grid - dynamically allocates a 2d array of integers
 * @width: width of the array (columns)
 * @height: height of the array (rows)
 *
 * Return: pointer to a dynamic array, or NULL (otherwise)
 */
int **alloc_grid(int width, int height)
{
	int i, j, **arr, error = 0;

	if (height <= 0 || width <= 0)
		return (NULL);

	arr = (int **) malloc(height * sizeof(int *));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		arr[i] = (int *)malloc(width * sizeof(int));
		if (arr[i] == NULL)
		{
			error = 1;
			break;
		}
	}

	if (error)
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
