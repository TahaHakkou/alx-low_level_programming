#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: decimal number
 * @index: index of bit to set to 1
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m = *n;
	unsigned int i;

	for (i = 0; i < index; i++)
		m /= 2;
	if (m % 2 == 0)
		n += pow(2, index);
}
