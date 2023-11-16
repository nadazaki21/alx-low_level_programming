#include "lists.h"
#include <string.h>
/**
 * add_node - adds a new node at the begining of a list_t list.
 * @head: array of pinters to structs
 * @str: data  to add in new node of linked list
 * Return: the pointer tp the new node in linked list
*/
list_t *add_node(list_t **head, const char *str)
{
	/* head is an array of pointer to stucts*/
	/* (*head) would mean the address of a specific struct*/
	int i = 0, len = 0;
	list_t *new_node, *tmp;

	/* create a new node*/
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	/*assign values to new node*/
	new_node->next = NULL;

	if (str != NULL)
	{
		while (str[i] != '\0')
		{
			len++;
			i++;
		}
		new_node->str = malloc(sizeof(char)* len);
		new_node->str = strdup(str);
		
	}
	else
		new_node->str = NULL;

	new_node->len = len;
	/*add the new node to the beginning*/
	if ((*head) != NULL)
	{
		new_node->next = head;
		head = new_node;
	}
	else
		*(head) = new_node;
	return (new_node);
}
