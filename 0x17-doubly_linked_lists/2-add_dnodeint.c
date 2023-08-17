#include "lists.h"

/**
 * add_dnodeint - a function that adds a new node at the
 * beginning of a dlistint_t list.
 * @head: the pointer to the node to be added to
 * the beginning of the dlistint_t list
 * @n: the data of the new node
 * Return: address of the new element or NUll if it fails
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL, *temp = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->prev = NULL;
	new->n = n;
	new->next = temp;
	*head = new;
	return (new);
}
