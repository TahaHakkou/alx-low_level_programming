#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
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
		while (!isdigit(argv[i][j]) && argv[i][j] != '\0')
			j++;
		if (j == strlen(argv[i]))
			n = atoi(argv[i]);
		else
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
