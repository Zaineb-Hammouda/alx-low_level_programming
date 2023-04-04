#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a listint_t list
 * @head: first node in list
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *traverse = head;

	while (traverse)
	{
		free(traverse);
		traverse = traverse->next;
	}
	head = NULL;
}
