#include "lists.h"
/**
 * pop_listint - deletes a node and returns the data of the node
 * @head: a listint_t list
 * Return: returns the data of the deleted node
*/
int pop_listint(listint_t **head)
{
	listint_t *inter;
	int i = 0;

	inter = *head;
	if (head == NULL)
		return (0);

	*head = (*head)->next;
	i = inter->n;
	free(inter);
	return (i);
}
