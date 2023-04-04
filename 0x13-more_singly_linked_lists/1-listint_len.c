#include "lists.h"
/**
 * listint_len - returns number of elements of a listint_t
 * @h: a listint_t list
 * Return: returns the number of elements
*/
size_t listint_len(const listint_t *h)
{
	int i = 0;

	for (; h != NULL; h = h->next)
	{
		i++;
	}
	return (i);
}
