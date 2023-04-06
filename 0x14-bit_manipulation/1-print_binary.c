#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: decimal number
 */
void print_binary(unsigned long int n)
{
	unsigned long int m = n;
	unsigned long int b = 1;

	while (m != 0)
		m -= b;
}
