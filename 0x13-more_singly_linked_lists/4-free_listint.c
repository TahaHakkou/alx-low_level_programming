#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - frees a listint_t list
 * @head: a pointer to the head of the linked list
 */
void free_listint(listint_t *head)
{
	free_listint(head->next);
	free(head);
}
