#include "lists.h"

/**
 * dlistint_len - calculates num of elements in a doubly linked list
 * @h: head of the list
 * Return: num of elements in list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *head = h;
	size_t num = 0;

	while (head && head->prev)
	{
		head = head->prev;
	}
	while (head)
	{
		num++;
		head = head->next;
	}
	return (num);
}
