#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at
 * index index of a listint_t linked list.
 * @head: pointert to head of lists of head pointer to several linked lists.
 * @index: the index from which a node will be deleted
 * Return: the value the deleted node held.
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current, *previous_node;
	int node_value;

	if ((*head) == NULL)
		return (-1);

	current = (*head);
	/* in case if deleting the head there is no prevoius node*/
	if (index == 0)
	{
		node_value = current->n;
		(*head) = current->next;
		free(current);
		return (node_value);
	}

	while (i != index && current != NULL)
	{
		if (i == (index - 1))
			previous_node = current;

		current = current->next;
		i++;
	}

	if (current == NULL)
		return (-1);

	node_value = current->n;

	previous_node->next = current->next;

	free(current);

	return (node_value);
}
