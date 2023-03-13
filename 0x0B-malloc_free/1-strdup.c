#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include "main.h"
/**
 * _strdup - allocates space in memory,
 *	     and copy the value of string
 * @str: string
 *
 * Return: a pointer to a new string which is a duplicate of the string str
 *	   NULL if str = NULL or memory is insufficient
 */
char *_strdup(char *str)
{
	char *p;

	p = malloc(strlen(str));
	if (p == NULL || str == NULL)
		return (NULL);
	memcpy(p, str, strlen(str));
	return (p);
}
