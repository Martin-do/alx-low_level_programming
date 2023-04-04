#include "lists.h"

/**
 * listint_len - returns number of elements of a listint_t
 * @h: a listint_t list
 * Return: returns the number of elements
*/
unsigned int listint_len(const listint_t *h)
{
	int i = 0;

	for (; h != NULL; h = h->next)
	{
		i++;
	}
	return (i);
}

/**
 * get_nodeint_at_index - gets the index of the node
 * @head: a listint_t list
 * @index: the index of the node we want to get
 * Return: returns the node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (index < listint_len(head))
	{
		for (; i < index; i++)
		{
			head = head->next;
		}
	}
	else
		return (NULL);

	return (head);
}
