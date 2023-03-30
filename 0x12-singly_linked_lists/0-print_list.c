#include "lists.h"
#include <stddef.h>
#include <stdio.h>
/**
 * print_list - prints all the elements of a list_t list
 * @h: a const pointer to the first node of linked list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	list_t *l = h;
	size_t i = 0;

	while (l != NULL)
	{
		if (l->str == NULL)
			printf("[0] (nil)");
		else
			printf("[%lu] %s\n", l->len, l->str);
		l = l->next;
		i++;
	}
	return (i);
}
