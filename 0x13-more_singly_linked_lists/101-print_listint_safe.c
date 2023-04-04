#include "lists.h"
#include <stddef.h>
#include <stdio.h>
/**
 * print_listint_safe - prints a listint_t linked list
 * @head: a const pointer to first node of linked list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *node;
	size_t n = 0;

	for (node = head; node->next != NULL; node = node->next)
	{
		printf("[%p] %d", node, node->n);
		n++;
	}
	return (n);
}
