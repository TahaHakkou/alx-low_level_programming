#include "main.h"
/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: the buffer that the function will use to store the result
 * @size_r: the buffer size
 *
 * Return: a pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i;
	char rem;

	*r = '\0';
	i = 0;
	while (*(n1 + i) != '\0')
		n1++;
	i = 0;
	while (*(n2 + i) != '\0')
		n1++;
	rem = '0';
	while ()
	{
		while (p != r)
		{
			*(p - i - 1) = *(p - i - 2)
		}
		*r = *(n1 + i) + *(n2 + i) - 2 * '0';
	}
}
