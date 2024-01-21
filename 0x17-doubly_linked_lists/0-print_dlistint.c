#include "lists.h"
/**
 * print_dlistint - print_dlistint
 * @h: head of the list
 * Return: the number of nodes in the lists
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes_count = 0;

	if (h == NULL)
	{
		return (0);
	}

	while (h != NULL)
	{
		printf("%d\n", h->n);

		nodes_count++;
		h = h->next;
	}

	return (nodes_count);
}
