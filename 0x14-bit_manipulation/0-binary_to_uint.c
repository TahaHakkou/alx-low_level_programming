#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0 if b is NULL or b[i] != {0,1}
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n, i;
	
	if (b == NULL)
		return (0);
	n = 0;
	i = 0;
	while (b[i] != '\0')
	{
		n *= 2;
		if (b[i] == '0')
			n += 0;
		else if (b[i] == '1')
			n += 1;
		else
			return (0);
	}
	return (n);
}
