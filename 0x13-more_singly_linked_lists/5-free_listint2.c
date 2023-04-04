#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * free_listint2 - frees a listint_t list & sets the head to NULL
 * @head: a pointer to a pointer to the first node
 */
void free_listint2(listint_t **head)
{
	listint_t *l = *head;
	listint_t *lx;

	*head = NULL;
	if (l == NULL)
		return;
	while (l->next != NULL)
	{
		lx = l->next;
		free(l);
		l = lx;
	}
	free(l);
}
