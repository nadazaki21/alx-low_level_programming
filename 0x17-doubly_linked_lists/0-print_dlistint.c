#include "lists.h"
/**
 * print_dlistint - print_dlistint
 * @h: head of the list
 * Return: the number of nodes in the lists
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes_count = 0;
	/*dlistint_t *cursor;*/

	if (h == NULL)
	{
		printf("-> 0 elements");
		return (0);
	}

	/*cursor = h;*/

	while (h != NULL)
	{
		printf("%d\n", h->n);

		nodes_count++;
		h = h->next;
	}
	/*printf("-> %ld elements", nodes_count);*/

	return (nodes_count);
}
