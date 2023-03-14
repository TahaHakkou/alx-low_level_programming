#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include "main.h"
/**
 * strtow - splits a string into words
 * @str: string
 *
 * Return: a pointer to an array of strings (words)
 */
char **strtow(char *str)
{
	char **words = NULL;

	if (str != NULL && str != "")
	{
		words = malloc(strlen(str));
		if (words != NULL)
		{
			/* h */
		}
	}
	return (words);
}
