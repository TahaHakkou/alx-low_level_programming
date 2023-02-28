#include "main.h"
/**
 * puts_half - prints half of a string, followed by a new line
 * @str: a pointer to string
 */
void puts_half(char *str)
{
	int i;
	char *p;

	p = s;
	while (*p != '\0')
		p++;
	for (i = ((p - s + 1) / 2); i < (p - s); i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
