#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a listint_t list and sets head to NULL
 * @head: first node in list
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temporary;

	while (*head)
	{
		temporary = *head;
		*head = temporary->next;
		free(temporary);
	}
	*head = NULL;
}
