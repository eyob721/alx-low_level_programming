#include "main.h"

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific character.
 * @size: size of the array
 * @c: a character
 *
 * Return: pointer to the char array on heap
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *chr;

	if (size == 0)
		return (NULL);
	chr = (char *) malloc(size * sizeof(char));
	if (chr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		chr[i] = c;
	return (chr);
}
