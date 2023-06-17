#include "lists.h"

/**
 * get_dnodeint_at_index - returns nth node
 * @head: head of the list
 * @index: index of node to return
 * Return: nth node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *begin = head;
	unsigned int num = 0;

	while (begin && begin->prev)
	{
		begin = begin->prev;
	}
	while (begin)
	{
		if (num == index)
			break;
		num++;
		begin = begin->next;
	}
	if (num != index)
		return (NULL);
	return (begin);
}
