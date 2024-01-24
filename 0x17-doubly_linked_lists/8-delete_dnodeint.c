#include "lists.h"
/**
 * delete_dnodeint_at_index - dletes the node at the index
 * @head: the head of he list
 * @index: the index of node to e deleted
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *cursor = *head, *temp, *node;
	unsigned int len = get_lenghth(*head);
	unsigned int node_index = 0;

	if (index > len)
		return (-1);
	if (*head == NULL)
		return (-1);

	if (index == 0)
	{   
        node = *head;
        temp = (*head)->next;
		(*head)->next->prev = NULL;
        (*head)->next = NULL;
        *head = temp;
        free(node);
	}
	else if (index == len)
	{
		while (cursor->next->next != NULL)
			cursor = cursor->next;
		
        temp = cursor->next;
        cursor->next = NULL;
        temp->prev = NULL;
        
        free(temp);
	}
	else
	{
		while ((index - 1) != node_index)
		{
			cursor = cursor->next;
			node_index++;
		}
		
        
	}
	return (1);
}