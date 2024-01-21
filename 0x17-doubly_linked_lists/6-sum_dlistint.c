#include "lists.h"
/**
 * sum_dlistint - print_dlistint
 * @head: head of the list
 * Return: the sum of noes in list
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
