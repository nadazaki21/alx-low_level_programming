#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head : head of the lsit
 * @n: the value of new node to be added
 * Return: the address of the new node added
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = n;

	if (*head != NULL)
	{
		(*head)->prev = new_node;
		new_node->next = *head;
		new_node->prev = NULL;
	}
	else
	{
		new_node->next = NULL;
		new_node->prev = NULL;
	}

	*head = new_node;

	return (new_node);
}
