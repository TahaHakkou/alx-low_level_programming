#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers, \
 *		 followed by a new line
 * @a: a pointer to the array of integers
 * @n: number of elements to be printed
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n && *(a + i) != '\0')
	{
		printf("%d", *(a + i));
		if (i == n || *(a + i) == '\0')
			continue;
		printf(", ");
		i++;
	}
	_putchar('\n');
}
