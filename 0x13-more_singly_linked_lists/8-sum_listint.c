#include "lists.h"

/**
 * sum_listint - returns the sum of all the data of linked list listint_t
 * Return: the sum
 * @head: first node in list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *traverse = head;

	while (traverse)
	{
		sum += traverse->n;
		traverse = traverse->next;
	}
	return (sum);
}
