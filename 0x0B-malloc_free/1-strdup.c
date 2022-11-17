#include "main.h"

/**
 * _strdup - returns a pointer to newly allocated space, that
 * is allocated using malloc, which contains a copy of a string
 * given as a parameter.
 * @str: a given string
 *
 * Return: pointer to a duplicated string on heap
 */
char *_strdup(char *str)
{
	int i, size = 1;/*size = 1, to include the '\0' */
	char *dup; /* duplicate string */

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		size++;
	dup = (char *) malloc(size * sizeof(char));
	if (dup == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		dup[i] = str[i];
	return (dup);
}
