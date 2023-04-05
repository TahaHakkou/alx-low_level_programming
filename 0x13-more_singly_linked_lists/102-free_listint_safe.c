#include "lists.h"
/**
 * free_listint_safe - 
 * @h: 
 * Return: 
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *sp, *fp;
	size_t n = 0;

	sp = head;
	fp = head;
	while (fp != NULL && fp->next != NULL)
	{
		/**/
	}
	head = NULL;
	return (n);
}
