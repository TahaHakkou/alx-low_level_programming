#include <stdio.h>

/**
 * main - prints possible combinations of two two-digit numbers
 * Return: value 0
 */
int main(void)
{
	int i, j, k, t;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			for (k = i; k <= '9'; k++)
			{
				for (t = j + 1; t <= '9'; t++)
				{
					if (j == '9')
					{
						k++;
						t = 0;
					}
					if (i != '0' || j != '0' || k != '0' || t != '1')
					{
						putchar(',');
						putchar(' ');
					}
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(t);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}