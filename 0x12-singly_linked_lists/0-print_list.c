#include "lists.h"

/**
 * print_list - prints out all the elements of a list_t list
 * @h: a list_t list
 * Return: returns the number of nodes
*/
size_t print_list(const list_t *h)
{
	char *s = "[0] (nil)";
	int i = 0;

	for (; h != NULL; h = h->next)
	{
		if (h->str == NULL)
			printf("%s\n", s);
		else
			printf("[%d] %s\n", h->len, h->str);
		i++;
	}
	return (i);
}
