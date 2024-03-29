#include "lists.h"
/**
 * print_listint - prints out the elements of a listint_t
 * @h: a listint_t list
 * Return: returns the number of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t i;

	i = 0;
	for (; h != NULL; h = h->next)
	{
		i++;
		printf("%d\n", h->n);
	}
	return (i);
}
