#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - function that creates a new dog.
 * @name: pointer to name of the dog.
 * @age: age of the dog.
 * @owner: pointer to the name of the owner of the dog
 *
 *  Return: Return null if function fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->name = malloc(sizeof(char) * (strlen(name) + 1));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		free(new_dog->name);
		return (NULL);
	}

	new_dog->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (new_dog->owner == NULL)
	{
		free(new_dog);
		free(new_dog->name);
		free(new_dog->owner);
		return (NULL);
	}

	strcpy(new_dog->name, name);
	strcpy(new_dog->owner, owner);
	new_dog->age = age;

	return (new_dog);
}

