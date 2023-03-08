#include "main.h"
/**
 * wildcmp - compares 2 strings
 * @s1: first string
 * @s2: second string
 *
 * Return: 1 if the strings can be considered identical, otherwise return 0
 */
int wildcmp(char *s1, char *s2)
{
	int i;

	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	else if (*s1 == '\0')
	{
		if (*s2 == '*')
			return (wildcmp(s1, ++s2));
		return (0);
	}
	else if (*s2 == '\0')
	{
		if (*s1 == '*')
			return (wildcmp(++s1, s2));
		return (0);
	}
	else if (*s1 == '*')
	{
		if (*s2 == '*')
			return();/* not complete */
		while (s2[i] != s1[1])
			i++;/* not complete */
	}
	else if (*s2 == '*')
	{
		while (s1[i] != s2[1])
			i++;/*  not complete  */
	}
	else
	{
		if (*s1 == *s2)
			return (wildcmp(++s1, ++s2));
		else
			return (0);
}
