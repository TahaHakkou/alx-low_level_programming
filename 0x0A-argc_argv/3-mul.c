#include <stdio.h>
/**
 * main - multiplies 2 args
 * @argc: arguments count
 * @argv: arguments vector
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
		printf("%d\n", argv[1] * argv[2]);
	else
		printf("Error\n");
	return (0);
}
