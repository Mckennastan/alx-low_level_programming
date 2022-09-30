#include "lists.h"

/**
 * get_dnodeint_at_index -  returns the nth node of a dlistint_t linked list.
 * @head: head of the list
 * @index: index of node
 * Return: returns the nth node of a dlistint_t linked list.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *cur = head;

	if (head == NULL)
		return (NULL);
	while (cur != NULL)
	{
		if (i == index)
			return (cur);
		cur = cur->next;
		++i;
	}
	return (NULL);
}
