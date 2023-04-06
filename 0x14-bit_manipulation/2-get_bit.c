#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: decimal number
 * @index: index of bit we want to get
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
		n /= 2;
	return (n % 2);
}
