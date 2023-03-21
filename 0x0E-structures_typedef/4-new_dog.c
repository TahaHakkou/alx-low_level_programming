#include "dog.h"
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner name
 *
 * Return: a pointer to the dog instance
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(*d));
	d->name = malloc((strlen(name) + 1) * sizeof(*name));
	d->owner = malloc((strlen(owner) + 1) * sizeof(*owner));
	if (d == NULL || d->name == NULL || d->owner == NULL)
		return (NULL);
	strcpy(d->name, name);
	d->age = age;
	strcpy(d->owner, owner);
	return (d);
}
