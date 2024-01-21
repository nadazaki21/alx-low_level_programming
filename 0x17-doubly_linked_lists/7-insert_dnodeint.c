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
 * insert_dnodeint_at_index - iserts node at aspecific index
 * @h: head of the list
 * @idx: the index to add to
 * @n: the value of the new node
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *cursor = *h, *new_node;
	unsigned int len = get_lenghth(*h);
	unsigned int node_index = 0;

	if (idx > len)
		return (NULL);
	if (*h == NULL && idx != 0)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (idx == 0)
	{   
		new_node->next = *h;
		new_node->prev = NULL;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
	}
	else if (idx == len)
	{
		while (cursor->next != NULL)
			cursor = cursor->next;
		new_node->next = NULL;
		new_node->prev = cursor;
		cursor->next = new_node;
	}
	else
	{
		while ((idx - 1) != node_index)
		{
			cursor = cursor->next;
			node_index++;
		}
		new_node->next = cursor->next;
		cursor->next = new_node;
		new_node->prev = cursor;
		cursor->next->prev= new_node;
	}
	return (new_node);
}