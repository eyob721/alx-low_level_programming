#include "main.h"

/**
 * print_rev - prints a string in reverse
 *@s: a string
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	for (--i; i > -1; i--)
		_putchar(*(s + i));
	_putchar('\n');
}
