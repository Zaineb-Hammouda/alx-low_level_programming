#include "lists.h"

/**
 * free_dlistint - frees a list
 * @head: head of list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *check, *begin;

	begin = head;
	while (begin)
	{
		check = begin->next;
		free(begin);
		begin = check;
	}
}
