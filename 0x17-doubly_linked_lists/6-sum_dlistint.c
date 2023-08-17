#include "lists.h"

/**
 * sum_dlistint - a function that returns the sum of
 * all the data (n) of a dlistint_t linked list.
 * @head: pointer to the beginning of the dlistint_t list
 * Return: returns the sum of all the data (n) of a
 * dlistint_t linked list or 0 if empty
*/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	while (temp->next != NULL)
	{
		temp = temp->next;
		sum += temp->n;
	}
	return (sum);
}
