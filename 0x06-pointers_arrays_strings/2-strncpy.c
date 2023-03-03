#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: destination buffer
 * @src: source buffer
 * @n: number of bytes to copy
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = -1;
	do {
		i++;
		*(dest + i) = *(src + i);
	} while (*(src + i) != '\0' && i < n);
	return (dest);
}
