#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @s: decoded string
 *
 * Return: encoded string
 */
char *rot13(char *s)
{
	int i, j, isupper;

	i = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) >= 'A' && *(s + i) <= 'Z')
			isupper = 'a' - 'Z';
		while (*(s + i) != ('a' + j) || *(s + i) != ('A' + j))
			*(s + i) = (*(s + i) - isupper - 'a' + 13) % 26 + isupper + 'a';
	}
	return (s);
}
