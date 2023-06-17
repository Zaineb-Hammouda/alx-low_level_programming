#include "lists.h"

/**
 * add_dnodeint_end - adds node at end of a list
 * @head: head of list
 * @n: data to store
 * Return: address of new element or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *begin;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	begin = *head;
	if (*head != NULL)
	{
		while (begin->next)
		{
			begin = begin->next;
		}
		begin->next = new;
		new->prev = begin;
		new->next = NULL;
		new->n = n;
	}
	else
	{
		new->n = n;
		new->next = NULL;
		new->prev = NULL;
		*head = new;
	}
	return (new);
}
