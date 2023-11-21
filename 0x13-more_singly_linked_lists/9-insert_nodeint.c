#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to several heads on linked lists
 * @idx: is the index of the list where the new node should be added.
 * @n: the value that hould be enetered inthe new node
 * Return: the address of the new node or NULL in case of failure
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new_node, *tmp, *current;

	if ((*head) == NULL)
		return (NULL);

	current = (*head);

	while (i != idx && current != NULL)
	{
		current = current->next;
		i++;
	}

	if (current == NULL)
		return (NULL);

	else
	{
		new_node = malloc(sizeof(listint_t));
		new_node->n = n;

		tmp = current->next;
		current->next = new_node;
		new_node->next = tmp;

		return (new_node);
	}
}
