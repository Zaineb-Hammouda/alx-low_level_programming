#include "lists.h"

/**
 * sum_dlistint - calculates sum of data n in a doubly linked list
 * @head: head of the list
 * Return: sum of data in list
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *begin = head;
	int sum = 0;

	if (begin == NULL)
	{
		return (0);
	}
	while (begin && begin->prev)
	{
		begin = begin->prev;
	}
	while (begin)
	{
		sum += begin->n;
		begin = begin->next;
	}
	return (sum);
}
