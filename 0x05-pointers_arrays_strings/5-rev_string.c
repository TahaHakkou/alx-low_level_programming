#include "main.h"
/**
 * rev_string - reverses a string
 * @s: a string to string to be reversed
 */
void rev_string(char *s)
{
	int l, i;

	l = _strlen(s);
	i = 0;
	while (i < (l / 2))
	{
		swap_int((s + i), (s + l - i - 1));
		i++;
	}
}
