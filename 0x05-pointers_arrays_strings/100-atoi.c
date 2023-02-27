#include "main.h"
/**
 * _atoi - convert a string to an integer
 * @s: a pointer to string to be converted
 *
 * Return: converted string
 */
int _atoi(char *s)
{
	int sign, num;

	sign = 0;
	num = 0;
	while (*s < '0' && *s > '9')
	{
		if (*s == '+')
			sign++;
		else if (*s == '-')
			sign--;
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		num *= 10;
		num += (*s - '0');
		s++;
	}
	if (sign < 0)
		num = -num;
	return (num);
}
