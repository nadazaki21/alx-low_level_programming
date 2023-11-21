#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked
 * list, and returns the head node’s data (n).
 * @head: pointer to several heads of several linked lists
 * Return: the head node’s data (n).
*/
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int tmp_value;

	if ((*head) == NULL)
	{
		return (0);
	}
	else
	{
		tmp = (*head)->next;
		(*head)->next = NULL;
		tmp_value = (*head)->n;
		*head = tmp;
		return (tmp_value);
	}
}
