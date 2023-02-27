#include "main.h"
/**
 * puts2 - prints every other character of a string, \
 *	   starting with the first character, followed by a new line
 * @str: a pointer to string
 */
void puts2(char *str)
{
	int i, l;

	l = _strlen(str);
	for (i = 0; i < l; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(*(str + i));
		}
	}
	_putchar('\n');
}
