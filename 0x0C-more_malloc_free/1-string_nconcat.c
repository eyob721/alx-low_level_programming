#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 *
 * Return: pointer to the concatented string, NULL (otherwise)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1 = 0, len2 = 0, size = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s1 = "";
	/* Find the length of s1 */
	for (i = 0; s1[i] != '\0'; i++)
		len1++;
	/* Find the length of s2 */
	for (i = 0; s2[i] != '\0'; i++)
		len2++;
	/* Check if n is less than length of s2 */
	/* And determine the length of the concatenated string */
	if (n < len2)
		size = len1 + n + 1;
	else
		size = len1 + len2 + 1;
	/* Now allocate memory using the computed size */
	str = malloc(size * sizeof(char));
	/* If memory allocation has failed, return NULL */
	if (str == NULL)
		return (NULL);
	/* Now that memory is allocated lets concatenate the two strings */
	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	for (j = 0; j < n && s2[j] != '\0'; j++, i++)
		str[i] = s2[j];
	/* Dont forget to add teh null terminator */
	str[i] = '\0';

	return (str);
}
