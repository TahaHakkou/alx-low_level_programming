#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers
 * @argc: arguments count
 * @argv: arguments vector
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int sum = 0, i = 1, n;

	while (i < argc)
	{
		n = atoi(argv[i]);
		if (n == 0 && *argv[i] != '0')
		{
			printf("Error\n");
			return (1);
		}
		sum += n;
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
