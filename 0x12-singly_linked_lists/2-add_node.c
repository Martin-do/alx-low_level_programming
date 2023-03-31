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
 * add_node - adds a new node to the beginning of the list
 * @head: the starting node
 * @str: the data to be added to the node
 * Return: returns the address of the new element
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	char *s;
	int i;

	new = malloc(sizeof(size_t));
	if (new == NULL)
		return (NULL);

	if (str == NULL)
	{
		s = NULL;
		i = 0;
	}
	else
	{
		s = strdup(str);
		i = _strlen(str);
	}

	new->str = s;
	new->len = i;
	new->next = *head;
	*head = new;
	if (head != NULL)
		return (new->next);
	else
		return (NULL);
}

