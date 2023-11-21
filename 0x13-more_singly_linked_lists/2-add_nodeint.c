#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: pointe to that point to addresses of several heads
 * of several linked lists
 * @n: the number to be added inthe new node
 * Return: the address of the new element of NULL if it fails
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	/* create a new node*/
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	/*assign values to new node*/
	new_node->next = NULL;
	new_node->n = n;

	/*add the new node to the beginning*/
	if ((*head) != NULL)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
		*(head) = new_node;
	return (new_node);

}
