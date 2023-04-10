#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: decimal number
 * @index: index of bit to set to 1
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m = 1;

	for (; index > 0; index--)
		m *= 2;
	*n = *n | m;
	return (1); /* return */
}