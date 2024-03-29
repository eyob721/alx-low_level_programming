#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: pointer to an unsigned long integer
 * @index: index of the bit
 *
 * Return: 1 if it worked, or -1 if an error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int and_mask = 1;

	if (index > 63)
		return (-1);
	*n = (*n) & ~(and_mask << index);
	return (1);
}
