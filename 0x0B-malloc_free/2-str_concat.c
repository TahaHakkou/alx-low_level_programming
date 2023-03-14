#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: 
 */
char *str_concat(char *s1, char *s2)
{
	char *s = NULL;

	if (s1 == NULL)
		*s1 = '\0';
	if (s2 == NULL)
		*s2 = '\0';
	s = malloc(strlen(s1) + strlen(s2) + 1);
	if (s != NULL)
	{
		memcpy(s, s1, strlen(s1));
		memcpy(s + strlen(s1), s2, strlen(s2) + 1);
	}
	return (s);
}
