#include "main.h"
#include <stdio.h>
/** print_diagsums - prints the sum of the two diagonals
 *	   of a square matrix of integers
 * @a: array of arrays of int
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum1, sum2;

	for (i = 0; i < size; i++)
		sum1 += *(a + size * i + i);
	for (i = 0; i < size; i++)
	{
		for (j = size - 1; j >= 0; j--)
			sum2 += *(a + size * i + j);
	}
	printf("%d, %d\n", sum1, sum2);
}
