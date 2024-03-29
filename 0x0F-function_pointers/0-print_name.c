#include "function_pointers.h"

/**
 * print_name - a funciton that prints a name
 * @name: name to be printed
 * @f: pointer to the funcion that is going to do the printing
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
