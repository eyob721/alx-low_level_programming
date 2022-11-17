#include "main.h"

/**
 * strtow - splits a string into words
 * @str: a string
 *
 * Return: pointer to an array of words, or NULL (otherwise)
 */
char **strtow(char *str)
{
	int i, j, k, l, wc = 0, len, error = 0;
	char **words;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (i = 1; str[i] != '\0'; i++)
		if (str[i] == ' ' && str[i - 1] != ' ')
			wc++;
	if (wc == 0)
		return (NULL);
	if (str[i - 1] != ' ')
		wc++;
	wc++;
	words = (char **) malloc(wc * sizeof(char *));
	if (words == NULL)
		return (NULL);
	for (i = 0, k = 0; k < wc - 1; i++, k++)
	{
		while (str[i] == ' ')
			i++;
		j = i;
		for (len = 0; str[i] != ' ' && str[i] != '\0'; len++)
			i++;
		words[k] = (char *) malloc(len * sizeof(char));
		if (words[k] == NULL)
		{
			error = 1;
			break;
		}
		for (l = 0; l < len; l++, j++)
			words[k][l] = str[j];
	}

	words[k] = NULL;
	return (words);
}
