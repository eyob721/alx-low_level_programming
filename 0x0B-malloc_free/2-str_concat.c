#include "main.h"

/**
 * str_concat - returns a pointer to a memory location, that contains
 * memory of s1 followed by memory of s2, and null terminated
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to concatenated string, NULL (otherwise)
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, size = 1; /* size = 1, to include the '\0' character */
	char *con; /* concatenated new string */

	for (i = 0; s1[i] != '\0'; i++)
		size++;
	for (i = 0; s2[i] != '\0'; i++)
		size++;

	con = (char *) malloc(size * sizeof(char));
	if (con == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		con[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++, i++)
		con[i] = s2[j];

	return (con);
}
