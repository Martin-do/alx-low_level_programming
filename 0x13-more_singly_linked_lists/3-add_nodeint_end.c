#include "lists.h"

/**
 * add_nodeint_end - adds a new node to the end of a listint_t
 * @head: a listint_t list
 * @n: a constant integer
 * Return: returns address of new element
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *inter;

	inter = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (inter->next != NULL)
		inter = inter->next;

	inter->next = new;
	return (new);
}
