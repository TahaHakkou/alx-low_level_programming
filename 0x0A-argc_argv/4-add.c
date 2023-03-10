#include <stdio.h>
/**
 * main - adds positive numbers
 * @argc: arguments count
 * @argv: arguments vector
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int sum = 0, i = 1, j, n;

	while (i < argc)
	{
		j = 0;
		n = 0;
		while (argv[i][j] != '\0')
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
			n *= 10;
			n += argv[i][j];
		}
		sum += n;
	}
	printf("%d\n", sum);
	return (0);
}
