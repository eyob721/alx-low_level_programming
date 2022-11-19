#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of members of the array
 * @size: size of each individual members
 *
 * Return: a pointer to the allcoated memory, NULL if the passed
 * nmemb or size are 0, or if memory allocation fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *mem;

	/* Check if nmemb and size are greater than 0 */
	if (nmemb == 0 || size == 0)
		return (NULL);

	/* Allocate memory using malloc */
	mem = malloc(nmemb * size);
	/* If memory allocation fails, return NULL */
	if (mem == NULL)
		return (NULL);

	/* Now to Initialize the elements to 0 */
	/* Typecast the void pointer to char, to write on the memory */
	/* char is used to access each 1 byte of the memory */
	/* Number of bytes = (nmemb * size) */
	for (i = 0; i < (nmemb * size); i++)
		*((char *) mem + i) = 0;

	return (mem);
}
