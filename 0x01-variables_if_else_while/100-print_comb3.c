#include <stdio.h>

/**
 * main - prints possible combinations of two_digits numbers
 * Return: value 0
 */
int main(void)
{
	int i, j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = i + 1; j <= '9'; j++)
		{
			putchar(i);
			putchar(j);
			putchar(',');
			putchar(' ');
		}
		if (i == '9')
			break;
	}
	putchar('\n');
	return (0);
}
