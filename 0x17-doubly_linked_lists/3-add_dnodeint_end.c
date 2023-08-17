#include "lists.h"

/**
 * add_dnodeint_end - a function that adds a new node at the
 * end of a dlistint_t list
 * @head: pointer to the beginning of the dlistint_t list
 * @n: value to be added at the end of the dlistint_t list
 * Return: returns address of new node
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *temp;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->prev = NULL;
	new->n = n;
	new->next = NULL;


	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (*head);
	}

	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new;
	new->prev = temp;
	return (new);
}
