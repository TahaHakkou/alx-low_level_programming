#include "main.h"
/**
 * print_number - prints an integer
 * @n: number
 */
void print_number(int n)
{
	int dec_pow = 10;
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	while (n / dec_pow != 0)
	{
		dec_pow *= 10;
	}
	while (dec_pow != 1)
	{
		dec_pow /= 10;
		_putchar((n / dec_pow) % 10 + '0');
	}
}
