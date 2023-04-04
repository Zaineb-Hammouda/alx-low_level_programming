#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node and returns the head node's data
 * Return: the head node's data (n) or 0 if list is empty
 * @head: head node of list
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp = *head;

	if (temp == NULL)
	{
		return (0);
	}
	n = temp->n;
	*head = temp->next;
	free(temp);
	return (n);
}
