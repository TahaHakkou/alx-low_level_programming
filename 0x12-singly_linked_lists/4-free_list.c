#include "lists.h"
#include <stddef.h>
/**
 * free_list - frees a list_t list
 * @head: first node of the linked list
 */
void free_list(list_t *head)
{
	list_t *n;

	while (head != NULL)
	{
		n = head;
		head = head->next;
		free(n);
	}
}
