#include "lists.h"
/**
 * free_listint2 - frees a listint_t list
 * @head: a listint_t list
 * Return: return nothing
*/
void free_listint2(listint_t **head)
{
	listint_t *inter, *new;

	if (head == NULL)
		return;
	inter = *head;
	while (inter->next != NULL)
	{
		new = inter->next;
		free(inter);
		inter = new;
	}
	*head = NULL;
	free(inter);
}
