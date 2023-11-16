#include "lists.h"
/**
 * free_list - frees a list_t list.
 * @head: to pointer to structure that needs to be freed
*/
void free_list(list_t *head)
{
	free(head->str);
	free(head);
}
