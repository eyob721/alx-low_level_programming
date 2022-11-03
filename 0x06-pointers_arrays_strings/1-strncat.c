#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: n bytes from source
 *
 * Return: destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; src[j] != '\0' && j < n; i++, j++)
		dest[i] = src[j];
	if (dest[i] != '\0')
		dest[i] = '\0';
	return (dest);
}
