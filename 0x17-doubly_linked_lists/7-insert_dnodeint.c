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
	dlistint_t *temp, *temp2;

	new = malloc(sizeof(dlistint_t));
	new->prev = NULL;
	new->next = NULL;

	if (*h == NULL)
	{
		new->prev = NULL;
		*h = new;
		return (*h);
	}

	temp = *h;
	while (i < idx)
	{
		temp  = temp->next;
		i++;
	}
	temp2 = temp->next;
	temp->next = new;
	temp2->prev = new;
	new->prev = temp;
	new->next = temp2;
	new->n = n;

	return (new);
}
