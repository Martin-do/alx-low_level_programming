#include "lists.h"


/**
 * dlistint_len - a function that returns the number of elements
 * in a linked dlistint_t list.
 * @h: a dlistint_t list
 * Return: returns the number of elements
*/
size_t dlistint_len(const dlistint_t *h)
{
	 int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
