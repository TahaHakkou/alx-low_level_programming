#include "main.h"
/**
 * _strcpy - copies the string pointed to by src, \
 *	     including the terminating null byte (\0), \
 *	     to the buffer pointed to by dest
 * @dest: a pointer to destination buffer
 * @src: a pointer to source buffer
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int l, i;

	l = _strlen(src);
	for (i = 0; i <= l; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
