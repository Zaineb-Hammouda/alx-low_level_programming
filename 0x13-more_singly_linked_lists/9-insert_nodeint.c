#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given index
 * Return: the nth node or null if it doesn't exist
 * @head: first node
 * @idx: index where the new node should be added
 * @n: data to include in node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int size = 0;
	listint_t *tmp, *traverser;

	if (head == NULL)
		return (NULL);
	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
		return (NULL);
	tmp->n = n;
	traverser = *head;
	if (idx == 0)
	{
		tmp->next = *head;
		*head = tmp;
		return (*head);
	}
	while (traverser)
	{
		if (size == idx - 1)
		{
			tmp->next = traverser->next;
			traverser->next = tmp;
		}
		size++;
		traverser = traverser->next;
	}
	if (idx > size)
		return (NULL);
	return (tmp);
}
