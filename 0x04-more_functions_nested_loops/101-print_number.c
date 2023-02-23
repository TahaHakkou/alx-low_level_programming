#include "main.h"
/**
 * print_number - prints an integer
 * @n: number
 */
void print_number(int n)
{
	int dec_pow = 10, is_negative = 0;

	if (n < 0)
	{
		_putchar('-');
		n = -(n + 1);
		is _negative = 1;
	}
	while (n / dec_pow != 0)
	{
		dec_pow *= 10;
	}
	while (dec_pow != 1)
	{
		dec_pow /= 10;
		if (dec_pow == 1 && is_negative)
			n -= 9;
		_putchar((n / dec_pow) % 10 + '0');
	}
}
