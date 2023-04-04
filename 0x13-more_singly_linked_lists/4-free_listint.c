#include "lists.h"
/**
 * free_listint - frees a listint_t list
 * @head: a listint_t list
*/
void free_listint(listint_t *head)
{
	listint_t *inter;

	while (head != NULL)
	{
		inter = head->next;
		free(head);
		head = inter;
	}
}
