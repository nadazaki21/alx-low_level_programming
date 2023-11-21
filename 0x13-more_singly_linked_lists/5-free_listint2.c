#include "lists.h"
/**
 * free_listint2 - frees a listint_t list.
 * @head: pointer to struct that is the start of the linked list
*/
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while ((*head) != NULL)
	{
		temp = (*head)->next;
		free((*head));
		(*head) = temp;
	}
}
