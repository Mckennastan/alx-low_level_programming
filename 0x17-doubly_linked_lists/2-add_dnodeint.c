#include "lists.h"

/**
 * add_dnodeint -  add new node to beginning of the list
 * @head: pointer to head of the list
 * @n: value the new node will hold
 * Return: adress of the new node or NULL if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);
	if (*head == NULL)
	{
		new_node->next = NULL;
		new_node->prev = NULL;
		new_node->n = n;
		(*head) = new_node;
		return (*head);
	}
	new_node->next = *head;
	new_node->prev = NULL;
	new_node->n = n;
	(*head)->prev = new_node;
	(*head) = new_node;
	return (*head);
}
