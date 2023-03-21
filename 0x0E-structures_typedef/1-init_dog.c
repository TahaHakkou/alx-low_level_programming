#include "dog.h"
#include <stdio.h>
#include <stddef.h>
/**
 * init_dog - initialize a variable of type struct dog
 * @d: a pointer to the dog instance
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner name
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
	else
		printf("Ok\n");
}
