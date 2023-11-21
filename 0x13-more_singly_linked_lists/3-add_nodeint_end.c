#include "lists.h"
/**
 * add_nodeint_end -  adds a new node at the end of a listint_t list.
 * @head: pointer to list of pointer to structs
 * @n: the number ot e added in the new node
 * Return: the address of the newly added node
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *current_last_node, *tmp;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	/*assign values to new node*/
	new_node->next = NULL;
	new_node->n = n;

	/*add the new node to the end*/
	if ((*head) != NULL)
	{
		tmp = *(head);
		while ((*head)->next != NULL)
		{
			(*head) = (*head)->next;
		}
		current_last_node = (*head);
		*head = tmp;
		current_last_node->next = new_node;
	}
	else
		*(head) = new_node;
	return (new_node);
}
