#include "main.h"

/**
 * main - a program that prints the number of arguments passed into it
 * @ac: argument count
 * @av: argument vector
 *
 * Return: 0 on success, or 1 on error
 */
int main(int ac, char **av)
{
	(void)av;
	printf("%d\n", ac - 1);
	return (0);
}
