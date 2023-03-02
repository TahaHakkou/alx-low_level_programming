#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @s: string to capitalize
 *
 * Return: capitalized string
 */
char *cap_string(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) == ' ')
		{
			if (*(s + i + 1) >= 'a' && *(s + i + 1) <= 'z')
				*(s + i + 1) += ('A' - 'a');
		}
	}
	return (s);
}
