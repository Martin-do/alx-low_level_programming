#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a
 * new node at a given position.
 * @h: dlistint_t list to insert the node
 * @idx: index position to insert the node
 * @n: value of data of the new node
 * Return: returns address of new node or null
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new = NULL;
	dlistint_t *temp = *h, *temp2;

	if (h == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->prev = NULL;
	new->n = n;
	new->next = NULL;

	if (*h == NULL)
	{
		*h = new;
		return (*h);
	}
	if (idx == 0)
	{
		new->next = temp;
		temp->prev = new;
		new->n = n;
		*h = new;
		return (new);
	}
	for  (i = 0; i != idx - 1 && temp->next != NULL; i++)
		temp  = temp->next;

	if (temp->next == NULL && i != (idx - 1))
		return (NULL);
	temp2 = temp->next;
	temp->next = new;
	temp2->prev = new;
	new->prev = temp;
	new->next = temp2;

	return (new);
}
