#include "main.h"
/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: base number
 * @y: power number
 *
 * Return: pow(x,y) if (x >= 0) and -1 if (x < 0)
 */
int _pow_recursion(int x, int y)
{
	if (x < 0)
		return (-1);

	if (y > 0)
		return (x * _pow_recursion(x, y - 1));
	else if (y == 0)
		return (1);
	else
		return (1 / _pow_recursion(x, y));
}
