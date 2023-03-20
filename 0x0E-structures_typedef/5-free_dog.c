#include "dog.h"
/**
 * free_dog - frees dogs
 * @d: dog instance to free
 */
void free_dog(dog_t *d)
{
	free(d);
}
