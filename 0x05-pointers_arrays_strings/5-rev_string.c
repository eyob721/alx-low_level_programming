#include <stdio.h>

/**
 * rev_string - reverses a given string
 * @s: a string
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, j;
	char copy[10000] = {'\0'};

	for (i = 0; s[i] != '\0'; i++)
		copy[i] = s[i];
	for (--i, j = 0; i > -1; i--, j++)
		s[j] = copy[i];
}
