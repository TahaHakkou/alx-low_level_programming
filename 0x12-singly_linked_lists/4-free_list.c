#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * free_list - frees a list_t list
 * @head: a pointer to first node of the linked list
 */
void free_list(list_t *head)
{
	list_t *l = head;
	
	while (head->next != NULL)
	{
		head = head->next;
		free(l);
	}
	free(head);
}
