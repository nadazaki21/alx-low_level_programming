#include "lists.h"
/**
 * dlistint_len - print_dlistint
 * @h: head of the list
 * Return: the number of nodes in the lists
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes_count = 0;

	if (h == NULL)
	{
		return (0);
	}

	while (h != NULL)
	{
		nodes_count++;
		h = h->next;
	}

	return (nodes_count);
}
