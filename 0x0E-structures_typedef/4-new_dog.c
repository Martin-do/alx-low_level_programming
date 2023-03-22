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
		if (str_c == NULL)
			return (NULL);
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
	char *dog_name;
	char *dog_owner;

	bingo = malloc(sizeof(dog_t));
	if (bingo == NULL)
		return (NULL);

	dog_name = _strdup(name);
	if (dog_name == NULL)
	{
		free(bingo);
		return (NULL);
	}

	dog_owner = _strdup(owner);
	if (dog_owner == NULL)
	{
		free(bingo->name);
		free(bingo);
		return (NULL);
	}

	bingo->name = dog_name;
	bingo->owner = dog_owner;
	bingo->age = age;

	return (bingo);
}
