#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to first element in linked list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;
	const listint_t *traverse = h;

	while (traverse)
	{
		printf("%d\n", traverse->n);
		traverse = traverse->next;
		i++;
	}
	return (i);
}
