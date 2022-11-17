#include "main.h"

/**
 * argstostr - concatenates all the arguments of a program
 * after each argument, it add a new line
 * @ac: argument count
 * @av: argument vector (array of string pointers)
 *
 * Return: pointer to concatenated string, or NULL (otherwise)
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, len = 1; /* len = 1, to account for '\0' character */
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	/* Find the length of each string arguments */
	for (i = 0; i < ac; i++)
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
	/* Also count the number of new lines needed */
	/* no of new lines = ac */
	len = len + ac;
	/* Allocate space based on the length */
	str = (char *) malloc(len * sizeof(char));
	/* If memory allocation fails, return NULL */
	if (str == NULL)
		return (NULL);
	/* Now concatenate the arguments */
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, k++)
			str[k] = av[i][j];
		/* Add a new line after each argument */
		str[k] = '\n';
		k++;
	}

	return (str);
}
