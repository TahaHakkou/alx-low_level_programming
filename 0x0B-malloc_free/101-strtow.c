#include <stdlib.h>
#include "main.h"
/**
 * strtow - splits a string into words
 * @str: string
 *
 * Return: a pointer to an array of strings (words)
 */
char **strtow(char *str)
{
	int i =0;
	char *word;

	if (str == NULL || str == "")
		return (NULL);
	while (str[i] != '\0')
	{
		while (str[i] != ' ' && str[i] != '\0')
		{
			word[i] = str[i];
			i++;
		}
		word[i] = '\0';
	}
}
