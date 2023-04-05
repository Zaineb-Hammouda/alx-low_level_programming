#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of linked list
 * Return: the nth node or null if it doesn't exist
 * @head: first node
 * @index: index if node to return
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *nthNode = head;
	unsigned int i = 0;

	while (nthNode)
	{
		if (i == index)
		{
			return (nthNode);
		}
		i++;
		nthNode = nthNode->next;
	}
	return (NULL);
}
