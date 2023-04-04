#include "lists.h"
/**
 * sum_listint - sums up the data of each element of a listint_t
 * @head: a listint_t list
 * Return: returns the sum of data of elements
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	for (; head != NULL; head = head->next)
	{
		sum += head->n;
	}
	return (sum);
}
