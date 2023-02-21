#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 * @n: number
 *
 * Return: Always last number
 */
int print_last_digit(int n)
{
	_putchar(n % 10 + '0');
	return (n % 10);
}
