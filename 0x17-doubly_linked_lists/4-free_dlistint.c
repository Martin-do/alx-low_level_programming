#include "lists.h"


/**
 * free_dlistint - a function that frees a dlistint_t list.
 * @head: pointer to the dlistint_t list to be freed
 * Return: returns nothing since a void function
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
