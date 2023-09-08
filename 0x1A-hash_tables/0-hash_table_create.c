#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: the size of the array
 * Return: returns a pointer to newly created hash
 * table or NULL if something went wrong
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int i = 0;
	hash_table_t *nw_table;

	if (size < 1)
		return (NULL);

	nw_table = malloc(sizeof(hash_table_t));
	if (nw_table == NULL)
		return (NULL);

	nw_table->array = malloc(sizeof(hash_node_t *) * size);
	if (nw_table->array == NULL)
	{
		free(nw_table);
		return (NULL);
	}

	nw_table->size = size;

	for (; i < nw_table->size; i++)
		nw_table->array[i] = NULL;

	return (nw_table);
}
