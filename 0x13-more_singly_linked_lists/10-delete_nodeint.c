#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t linked list
 * @head: a pointer to a pointer to the head of linked list
 * @index: the index of the node that should be deleted. Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node;
	listint_t *l = *head;
	unsigned int i;

	for (i = 0; i < index - 1; i++)
	{
		if (l->next != NULL)
			l = l->next;
		else
			return (-1);
	}	
	node = l->next;
	l->next = l->next->next;
	free(node);
	return (1);
}
