#include "dog.h"

/**
 * init_dog - a function that initializes a variable of type `struct dog`
 * @d: pointer to the object of type `struct dog`
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
