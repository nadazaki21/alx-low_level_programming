#include "lists.h"
/**
 * get_nodeint_at_index -  that returns
 * the nth node of a listint_t linked list.
 * @head: pointer to stucts in linked lists
 * @index: the index of the struct
 * Return: the value that the struct whose index is sent holds
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current;

	if (head == NULL)
		return (NULL);

	current = head;

	while (i != index && current != NULL)
	{
		current = current->next;
		i++;
	}

	if (current == NULL)
		return (NULL);
	else
		return (head);
}
