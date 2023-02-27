#include "main.h"
/**
 * puts_half - prints half of a string, followed by a new line
 * @str: a pointer to string
 */
void puts_half(char *str)
{
	int i, l;

	l = _strlen(str);
	for (i = ((l + 1) / 2); i < l; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
