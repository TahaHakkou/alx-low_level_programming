#include <stdio.h>

/**
 * main - prints possible combinations of three_digits numbers
 * Return: value 0
 */
int main(void)
{
	int i, j, k;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = i + 1; j <= '9'; j++)
		{
			for (k = j + 1; k <= '9'; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				putchar(',');
				putchar(' ');
			}
		}
		if (i == '9')
			break;
	}
	putchar('\n');
	return (0);
}
