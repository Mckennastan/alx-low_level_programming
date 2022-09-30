#include "lists.h"

/**
 * add_dnodeint_end -  add new node to end of the list
 * @head: pointer to head of the list
 * @n: value the new node will hold
 * Return: adress of the new node or NULL if failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t)), *cur = *head;

	if (new_node == NULL)
		return (NULL);
	if (*head == NULL)
	{
		new_node->n = n;
		new_node->next = NULL;
		new_node->prev = NULL;
		(*head) = new_node;
		return (*head);
	}
	while (cur->next != NULL)
		cur = cur->next;

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = cur;
	cur->next = new_node;
	return (new_node);
}
