#include "lists.h"
/**
 * free_dlistint -  frees a dlistint_t list.
 * @head: head of the list
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *cursor = head, *next;

	while (cursor != NULL)
	{
		next = cursor->next;
		free(cursor);
		cursor = next;
	}

	head = NULL;
}
