#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes a node at index
 * @index: index of node to delete
 * @head: head node
 * Return: 1 if success, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head;
	listint_t *trav = *head;
	listint_t *prev = NULL;
	unsigned int counter = 0;

	while (trav)
	{
		counter++;
		trav = trav->next;
	}
	if (tmp->next == NULL && index == counter)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}
	while (tmp->next != NULL && counter != index)
	{
		prev = tmp;
		tmp = tmp->next;
	}
	if (tmp == NULL)
	{
		return (-1);
	}
	prev->next = tmp->next;
	free(tmp);
	return (1);
}
