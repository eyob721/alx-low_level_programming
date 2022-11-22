#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory block to be reallocated
 * @old_size: old size of the old memory block
 * @new_size: new size of the reallocated memory block
 *
 * Return: pointer to the reallocated memory,
 * or if new size == 0 and ptr is not NULL, it will free(ptr) and return NULL
 * or if new_size == old_size, it will return ptr
 * or if ptr == NULL, it is equivalent to malloc(new_size)
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i, copy_size;
	void *mem;

	/* If new_size = 0 and ptr is not NULL */
	/* realloc is equivalent to -> free(ptr) */
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	/* If new_size = old_size, no new memory allocation is required */
	if (new_size == old_size)
		return (ptr);

	mem = malloc(new_size);
	if (mem == NULL)
		return (NULL);
	/* If ptr = NULL, it is equivalent to -> malloc(new_size) */
	if (ptr == NULL)
		return (mem);

	copy_size = new_size < old_size ? new_size : old_size;
	for (i = 0; i < copy_size; i++)
		*((char *) mem + i) = *((char *) ptr + i);
	free(ptr);

	return (mem);
}
