#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: destination memory area
 * @src: source memory area
 * @n: number of bytes
 *
 * Return: destination memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	if (dest != NULL && src != NULL)
		for (i = 0; i < n; i++)
			dest[i] = src[i];
	return (dest);
}
