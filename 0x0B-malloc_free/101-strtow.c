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

	if (str == NULL || (*str == ' ' && str[1] == '\0') || *str == '\0')
		return (NULL);
	for (i = 1; str[i] != '\0'; i++)
		if (str[i] == ' ' && str[i - 1] != ' ')
			wc++;
	if (str[i - 1] != ' ')
		wc++;
	words = (char **) malloc(wc * sizeof(char *));
	if (words == NULL)
		return (NULL);

	for (i = 0, k = 0; k < wc; i++, k++)
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
	if (error)
	{
		for (i = 0; i < wc; i++)
			free(words[i]);
		free(words);
		return (NULL);
	}
	words[k] = NULL;
	return (words);
}
