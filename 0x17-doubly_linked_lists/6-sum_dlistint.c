#include "lists.h"
/**
 * dlistint_len - print_dlistint
 * @h: head of the list
 * Return: the number of nodes in the lists
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *h = head;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		sum = sum + h->n;
		h = h->next;
	}
	return (sum);
}
