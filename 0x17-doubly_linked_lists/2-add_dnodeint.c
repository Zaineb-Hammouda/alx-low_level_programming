#include "lists.h"
/**
 * add_dnodeint - adds a new node at beginning of list
 * Return: adress of new element or NULL if failed
 * @head: adress of head of list
 * @n: data to store in node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;

	if (*head != NULL)
		(*head)->prev = new;
	*head = new;
	return (new);
}
