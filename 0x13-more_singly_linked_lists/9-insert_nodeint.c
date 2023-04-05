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

/**
 * insert_nodeint_at_index - inserts a node at a specified index
 * @head: a listint_t list
 * @idx: the index of the node we want to get
 * @n: the data to be added in the new node
 * Return: returns the new inserted node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *inter;

	new  = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	inter = get_nodeint_at_index(*head, idx - 1);

	if (inter == NULL)
		return (NULL);

	new->next = inter->next;
	inter->next = new;

	return (new);
}
