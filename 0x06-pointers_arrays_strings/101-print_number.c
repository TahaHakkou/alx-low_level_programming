#include "main.h"
/**
 * print_number - prints an integer
 * @n: number
 */
void print_number(int n)
{
	int pow = 10, is_negative = 0;

	if (n < 0)
	{
		_putchar('-');
		n = -(n + 1);
		is_negative = 1;
	}
	while (n / pow != 0)
	{
		pow *= 10;
	}
	while (pow != 1)
	{
		pow /= 10;
		if (pow == 1 && is_negative)
			n -= 9;
		_putchar((n / pow) % 10 + '0');
	}
}
