#include "lists.h"
/**
 * list_len - getsthe length of the linked list
 * @h: the pointe to the head of the linked list
 * Return: the length of the linked list
*/
size_t list_len(const list_t *h)
{
	size_t len = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
