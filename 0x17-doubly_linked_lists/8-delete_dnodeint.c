#include "lists.h"


/**
 * delete_dnodeint_at_index - deletes the node at index index of
 * a dlistint_t linked list.
 * @head: node at the beginnig of the dlistint_t list
 * @index: is the index of the node that should be deleted. Index starts at 0
 * Return: returns 1 if it succeeded, -1 if it failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *ptr = *head, *temp = NULL;

	if (*head == NULL)
		return (-1);
	ptr = *head;
	if (index == 0)
	{
		if (ptr->next != NULL)
		{
			ptr = ptr->next;
			ptr->prev = NULL;
			*head = ptr;
			return (1);
		}
		ptr = NULL;
		*head = ptr;
		return (-1);
	}
	while (i < index)
	{
		ptr = ptr->next;
		i++;
	}
	temp = ptr->prev;
	temp->next = ptr->next;

	return (1);
}
