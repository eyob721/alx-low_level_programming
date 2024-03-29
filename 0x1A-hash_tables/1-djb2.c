#include "hash_tables.h"

/**
 * hash_djb2 - implementation of the djb2 algorithm
 * @str: string to hash
 *
 * Return: hash code of the string
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned char c;
	unsigned long int hash = 5381;

	while ((c = *str++))
		hash = ((hash << 5) + hash) + c; /* ==> (hash * 33) + c */
	return (hash);
}
