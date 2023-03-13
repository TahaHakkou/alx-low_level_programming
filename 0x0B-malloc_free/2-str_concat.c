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
	char *s;

	s = malloc(strlen(s1) + strlrn(s2));
	if (s == NULL)
		return (s);
	if (s1 == NULL)
	memcpy(s, s1, strlen(s1));
	memcpy(s[strlen(s1)], s2, strlen(s2));
	return (s);
}
