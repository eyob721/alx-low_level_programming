#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: an integer (size of the memory)
 *
 * Return: pointer to allocated memory, 98 (if malloc fails)
 */
void *malloc_checked(unsigned int b)
{
	void *mal = malloc(b);

	if (mal == NULL)
		exit(98);
	return (mal);
}
