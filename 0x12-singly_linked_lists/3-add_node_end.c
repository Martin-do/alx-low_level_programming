#include "lists.h"

/**
 * _strlen - counts the length of a string
 * @string: string to nbe counted
 * Return: returns the length of the string
*/
int _strlen(const char *string)
{
	int length;

	length = 0;
	while (string[length] != '\0')
	{
		length++;
	}
	return (length);
}

/**
 * add_node_end - adds an element to the end of a list_t list
 * @head: list_t list
 * @str: data to be added
 * Return: returns the address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *inter;
	char *s;
	int i;

	inter = *head;
	new = malloc(sizeof(size_t));
	if (new == NULL)
		return (NULL);

	if (str == NULL)
		return (NULL);

	s = strdup(str);
	i = _strlen(str);

	new->str = s;
	new->len = i;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (inter->next != NULL)
	{
		inter = inter->next;
	}
	inter->next = new;
	return (new);
}

