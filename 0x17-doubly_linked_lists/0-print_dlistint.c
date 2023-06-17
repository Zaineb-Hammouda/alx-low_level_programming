#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints elements of a doubly linked list
 * @h: head of the list
 * Return: num of nodes in list
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *head = h;
	size_t num = 0;

	while (head && head->prev)
		head = head->prev;
	while (head)
	{
		printf("%d\n", head->n);
		num++;
		head = head->next;
	}
	return (num);
}
