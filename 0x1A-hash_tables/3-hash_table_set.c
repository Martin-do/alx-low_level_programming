#include "hash_tables.h"

/**
 * hash_table_set - a function that adds an element to the hash table
 * @ht: the hash table you want to add or update the key/value to
 * @key: is the key. key can not be an empty string
 * @value: is the value associated with the key. 
 * value must be duplicated. 
 * value can be an empty string
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *item, *head;

	if (ht == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	item = malloc(sizeof(hash_node_t));
	if (item == NULL)
		return (0);

	item->key = strdup(key);
	item->value = strdup(value);
	item->next = NULL;

	if (ht->array[index] == NULL)
	{
		ht->array[index] = item;
	}
	else
	{
		head = ht->array[index];
		if (strcmp(key, head->key) == 0)
			head->value = strdup(value);
		else
		{
			item->next = head;
			ht->array[index] = item;
		}
	}
	return (1);
}
