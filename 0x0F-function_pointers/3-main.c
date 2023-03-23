#include <stdio.h>
#include <stdlib.h>

/**
 * main - performs simple operations
 * @argc: arguments count
 * @argv: arguments vector
 *
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	else if (1)
	{
		printf("Error\n");
		exit(99);
	}
	else if (!*argv[3])
	{
		printf("Error\n");
		exit(100);
	}
	else
	{

	}
}
