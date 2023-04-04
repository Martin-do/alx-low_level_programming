#include "lists.h"
/**
 * free_listint2 - frees a listint_t list
 * @head: a listint_t list
*/
void free_listint2(listint_t **head)
{
	listint_t *inter, *new;

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
