#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - function that initialize a variable of type struct dog.
 * @d: pointer to do.
 * @name: character pointer to name of the dog in string.
 * @age: age of the dog in integer
 * @owner: character pointer to owners name
 *
 *  Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)

	d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
