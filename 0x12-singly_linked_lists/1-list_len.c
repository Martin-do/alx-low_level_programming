#include "lists.h"

/**
 * list_len - counts the number of nodes
 * @h: the list_t list to be counted
 * Return: returns the number of nodes
 */
size_t list_len(const list_t *h)
{
	int i = 0;

	for (; h != NULL; h = h->next)
	{
		i++;
	}
	return (i);
}
