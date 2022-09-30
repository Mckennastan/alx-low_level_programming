#include "lists.h"

/**
 * sum_dlistint -  returns the sum of all the data (n) of a
 * dlistint_t linked list
 * @head: head of the list
 *
 * Return: returns the sum of all the data (n) of a
 * dlistint_t linked list if list empty return 0.
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *cur = head;

	if (head == NULL)
		return (0);
	while (cur != NULL)
	{
		sum += cur->n;
		cur = cur->next;
	}
	return (sum);
}
