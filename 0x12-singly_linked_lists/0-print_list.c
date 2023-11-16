#include "lists.h"
/**
 * print_list -  prints all the elements of a list_t list.
 * @h: pointer to head od linked list (the first struct)
 * Return: the numer of nodes printed from thelinked list
*/
size_t print_list(const list_t *h) /* pointer is constant*/
{									/*means we can't change value thoufh it*/
	size_t nodes = 0;

	if (h == NULL)
	{
		return (0);
	}

	while (h != NULL)
	{
		printf("[%d] ", h->len);
		if (h->str == NULL)
			printf("(nil)\n");
		else
			printf("%s\n", h->str);

		nodes++;
		h = h->next;
	}
	return (nodes);
}
