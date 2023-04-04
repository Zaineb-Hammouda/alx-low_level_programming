#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * Return: the address of the new element or NULL if it failed
 * @head: first node in list
 * @n: the data to put in the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
