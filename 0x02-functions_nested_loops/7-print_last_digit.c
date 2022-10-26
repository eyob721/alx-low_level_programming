#include "main.h"

/**
 * print_last_digit - prints the last digit of an integer
 * @x: an integer
 * Return: the last digit of @x
 */
int print_last_digit(int x)
{
	if (x < 0)
		x *= -1;
	_putchar((x % 10) + '0');
	return (x % 10);
}
