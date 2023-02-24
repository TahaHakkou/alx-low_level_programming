#include <stdio.h>
/**
 * main - prints first 98 fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	size_t num1 = 1, num2 = 2, fib;

	printf("1, 2, ");
	for (i = 2; i < 98; i++)
	{
		fib = num1 + num2;
		printf("%zu", fib);
		if (i == 97)
			break;
		putchar(',');
		putchar(' ');
		num1 = num2;
		num2 = fib;
	}
	putchar('\n');
	return (0);
}
