#include <stdio.h>
#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: pointer to first element in linked list
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;
	const listint_t *traverse = h;

	while (traverse)
	{
		i++;
		traverse = traverse->next;
	}
	return (i);
}
