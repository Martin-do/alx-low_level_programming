#include "lists.h"

/**
 * get_dnodeint_at_index - a function that returns the
 * nth node of a dlistint_t linked list.
 * @head: head to the beginning of a dlistint_t list
 * @index: position or index of node needed
 * Return: returns the node or NUll if it does not exist
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	temp = head;
	while (temp)
	{
		if (i == index)
			return (temp);
		temp = temp->next;
		i++;
	}
	return (NULL);
}
