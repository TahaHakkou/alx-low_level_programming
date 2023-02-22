#include <stdio.h>
/**
 * main - prints first 50 fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int i, num1 = 1, num2 = 2, fib;

	printf("1, 2, ");
	for (i = 2; i < 50; i++)
	{
		fib = num1 + num2;
		printf("%d",fib);
		if (i == 49)
			break;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
