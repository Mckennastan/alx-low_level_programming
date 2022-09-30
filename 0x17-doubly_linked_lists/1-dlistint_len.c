#include "lists.h"

/**
 * dlistint_len -  count how many nodes in the list
 * @h: head of the list
 * Return: the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int size = 0;

	while (h != NULL)
	{
		++size;
		h = h->next;
	}
	return (size);
}
