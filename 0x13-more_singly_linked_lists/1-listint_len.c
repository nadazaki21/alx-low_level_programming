#include "lists.h"
/**
 * listint_len -  prints all the elements of a listint_t list.
 * @h: pointer to structure in linked list
 * Return: the numer of nodes printed from the linked list
*/
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
