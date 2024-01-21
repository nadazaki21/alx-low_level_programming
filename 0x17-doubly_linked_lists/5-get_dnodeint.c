#include "lists.h"
/**
 * get_lenghth - getting length of the list
 * @head: head of the list
 * Return: the lenght of the list
*/
unsigned int get_lenghth(dlistint_t *head)
{
	unsigned int nodes_count = 0;
	dlistint_t *h = head;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		nodes_count++;
		h = h->next;
	}

	return (nodes_count);
}
/**
 * get_dnodeint_at_index - etttin ght enth node
 * @head: the head of the list
 * @index: index of the node to be returned
 * Return: the address of the nth node
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *cursor;
	unsigned int  len = get_lenghth(head), nodes_index = 0;

	cursor = head;

	if (index > len - 1)
		return (NULL);

	while (cursor != NULL)
	{
		if (nodes_index == index)
		{
			return (cursor);
		}
		nodes_index++;
		cursor = cursor->next;
	}
	return (NULL);
}
