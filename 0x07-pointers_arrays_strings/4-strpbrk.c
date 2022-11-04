#include "main.h"

/**
 * _strpbrk - locates the first occurrence in the string s of
 * any of the bytes in accept.
 * @s: a string
 * @accept: search key string
 *
 * Return: pointer to the found character in the string s, NULL otherwise
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
			/* If a character is found exit the inner loop */
			if (s[i] == accept[j])
				break;
		/* If a character is found exit the outer loop */
		if (accept[j] != '\0')
			break;
	}

	if (s[i] != '\0' && accept[j] != '\0' && s[i] == accept[j])
		return (&s[i]);

	return ('\0');
}
