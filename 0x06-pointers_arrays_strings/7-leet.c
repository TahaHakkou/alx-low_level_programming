#include "main.h"
/**
 * leet - encodes a string into 1337
 * @s: decoded string
 *
 * Return: encoded string
 */
char *leet(char *s)
{
	int i;
	char letter[] = {'a', 'e', 'o', 't', 'l'};
	int number[] = {4, 3, 0, 7, 1};

	i = 0;
	while (*(s + i) != '\0')
	{
		while (j < 5)
		{
			if (*(s + i) == letter[j])
			{
				*(s + i) = number[j] + '0';
			}
			j++;
		}
		i++;
	}
	return (s);
}
