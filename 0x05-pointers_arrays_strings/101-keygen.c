#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates random valid passwords for the program 101-crackme
 *
 * Return: Always 0
 */
int main(void)
{
	srand(time(NULL));
	printf("%d", rand());
	return (0);
}
