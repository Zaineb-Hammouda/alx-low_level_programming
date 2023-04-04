#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * Return: the address of the new element or NULL if it failed
 * @head: first node in list
 * @n: the data to put in the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode = malloc(sizeof(listint_t));
	listint_t *lastnode = NULL;

	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = NULL;
	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	lastnode = *head;
	while (lastnode->next)
	{
		lastnode = lastnode->next;
	}
	lastnode->next = newnode;
	return (newnode);
}
