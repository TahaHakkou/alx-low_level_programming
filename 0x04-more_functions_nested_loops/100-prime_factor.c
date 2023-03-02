#include <stdio.h>
/**
 * main - prints the largest prime factor of a number
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long int n = 612852475143, lpf = n, pf = 2;
	unsigned int i, j;

	while (lpf != pf)
	{
		for (i = pf + 1;; i++)
		{
			for (j = 2; j < i; j++)
				if (i % j == 0)
					break;
			if (j == i)
				break;
		}
		pf = i;
		while (lpf % pf == 0 && lpf != pf)
			lpf = lpf / pf;
	}
	printf("%lu\n", lpf);
	return (0);
}
