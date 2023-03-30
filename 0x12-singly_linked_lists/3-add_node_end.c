#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: first node in linked list
 * @str: string data of the new node
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node = malloc(sizeof(list_t));
	if (node != NULL)
	{
		node->str = strdup(str);
		node->len = strlen(str);
		node->next = NULL;
		while (*head != NULL)
			*head = (*head)->next;
		*head = node;
	}
	return (node);
}
