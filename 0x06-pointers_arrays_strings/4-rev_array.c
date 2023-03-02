#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: a pointer to the first element of the array
 * @n: number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int i, tmp, s;

	s = sizeof(int);
	for (i = 0; i < n / 2; i++)
	{
		tmp = *(a + i * s);
		*(a + i * s) = *(a + (n - i - 1) * s);
		*(a + (n - i - 1) * s) = tmp;
	}
}
