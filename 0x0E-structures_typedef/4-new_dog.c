#include "dog.h"

/**
 * _strdup - makes a copy of string in another memory location
 * @str: string to be copied
 * Return: returns pointer to new address of string
*/
char *_strdup(char *str)
{
	int i = 0;
	int length = 0;
	char *str_c;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		while (*(str + length) != '\0')
		{
			length++;
		}
		str_c = malloc(length * sizeof(char) + 1);
		while (*(str + i) != '\0')
		{
			*(str_c + i) = *(str + i);
			i++;
		}
		return (str_c);
	}
}

/**
 * new_dog - function that creates new dog
 * @name: name of the dog to be created
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: returns pointer to the created dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *bingo;
	char *n = _strdup(name);
	char *o = _strdup(owner);

	bingo = malloc(sizeof(dog_t));
	if (bingo == NULL)
		return (NULL);

	bingo->name = malloc(sizeof(n));
	if (bingo->name == NULL)
	{
		free(bingo);
		return (NULL);
	}

	bingo->owner = malloc(sizeof(o));
	if (bingo->owner == NULL)
	{
		free(bingo);
		free(bingo->name);
		return (NULL);
	}

	bingo->name = n;
	bingo->owner = o;
	bingo->age = age;

	return (bingo);
}
