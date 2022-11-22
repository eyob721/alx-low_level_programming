#include "main.h"

/**
 * array_range - creates an array of integers, the array includes all
 * the integers starting from min (included), to max(included).
 * Ordered from min to max
 * @min: minimum integer value
 * @max: maximum integer value
 *
 * Return: pointer to the array, or
 * NULL (if min > max or memory allocation fails)
 */
int *array_range(int min, int max)
{
	int i, *arr, range = 0;

	if (min > max)
		return (NULL);

	range = max - min + 1;

	arr = malloc(range * sizeof(int));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < range; i++)
		arr[i] = min + i;

	return (arr);
}
