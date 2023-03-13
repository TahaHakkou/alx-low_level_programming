#include <stdlib.h>
#include <stddef.h>
#include "main.h"
/**
 * create_array - creates an array of chars, and initializes it with a specific char
 * @size: size of the array
 * @c: character
 *
 * Return: a pointer to the array, AND NULL if it fails or size = 0
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	a = malloc(size);
	if (a == NULL || size == 0)
		return (NULL);
	for (i = 0; i < size; i++)
		a[i] = c;
	return (a);
}
